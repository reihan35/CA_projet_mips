#include <iostream>
#include <string>
#include <Program.h>
#include <Basic_block.h>
#include <Function.h>


int main(int argc, char * argv[]){

	if (argc < 2) {
	  cout << "erreur : pas de fichier assembleur" << endl;
	}	  	

	// r�cup�re le nom du fichier dans le chemin entr�e et sans extension
	std::string argv1(argv[1]);	
	
	size_t debut = argv1.find_last_of("/");
	if (debut == std::string::npos)
	  debut = 0;

	size_t fin = argv1.find_last_of(".");
	if (fin == std::string::npos)
	  fin = argv1.size();
	string name = argv1.substr(debut + 1, fin - (debut + 1));

	Program prog(argv[1]);
	cout<<"Le programme a "<<prog.size()<<" lignes\n"<<endl;

	// delimitation et construction des fonctions du fichier
	prog.comput_function();
	cout<<"nombre de fonctions : "<<prog.nbr_func()<<endl;

	
	//traitement pour toutes les fonction 
	for(int i=0; i<  prog.nbr_func(); i++){
	 
	   cout<<"========== Function "<<i<<"==========="<<endl;
	   cout<<"============================"<<endl;

	   Function* functmp= prog.get_function(i);
		   
	  // delimitation des BB de la fonction
	  functmp->comput_basic_block();

	  // determination des liens entre les BB
	  functmp->comput_succ_pred_BB();
	  
	  // production d'un fichier .dot pour le CFG de la fonction
	  string name_f_cfg = "./tmp/" + name + "_cfg_func_" + std::to_string(i) +".dot";
	  Cfg *c = new Cfg(functmp->get_BB(0), functmp->nbr_BB());
	  c->restitution(nullptr, name_f_cfg);
	 
  	   
	   // calcul des registres vivants en entr�e et sortie des BB
	   functmp ->compute_live_var();
	   
	   // iteration sur tous les BB du CFG
	   for(int j = 0;  j< functmp->nbr_BB(); j++){
	     
	     Basic_block * bb= functmp -> get_BB(j);
	     cout<<"---------- BB "<<j<<" -----------"<<endl;
	     
	     //affichage du BB
	     bb->display();

	     //calcul des liens de d�pendances entre les instructions du BB
	     bb->comput_pred_succ_dep();

	     /**************** CALCUL NB CYCLES *********************/
	     //affichage du nb de cycle pour l'execution du BB
	     int nbcycles_base = bb->nb_cycles();
	     cout<<"---nb_cycles : "<< nbcycles_base <<" -----------"<<endl;
	     
	     if (nbcycles_base == bb->get_nb_inst() && 
		 (!bb->get_branch() || (bb->get_branch() && !(bb->get_instruction_at_index(bb->get_nb_inst()-1)->is_nop())))){
	       cout << "nb de cycles == nb d'instructions et pas de delayed slot/nop dans le delayed slot" << endl;
	       continue;
	     }
	     
	     // creation du DAG de d�pendance associ� au BB
	     Dfg* d = new Dfg(bb);
	     string name_f_dfg1 = "./tmp/" + name + "_func_" + std::to_string(i) + "_dfg_bb" + std::to_string(bb->get_index()) + ".dot";
	     d->restitute(nullptr, name_f_dfg1, true);
	     
	     
	      
	     /**************** RENOMMAGE DE REGISTRE ****************/ 

	     // liste de registres pour le renommage
	     // avec des registres pass�ees en param�tre 
	     /*
	      
	       list<int> frees;
	       for(int k=32; k<64; k++){
	       frees.push_back(k);
	       }
	     */
	     
	     /* renommage en utilisant des registres n'existant pas */
	      
	     //  bb->reg_rename(&frees);
	     
	     /* renommage utilisant les registres disponibles dans le bloc */
	     /*  ne pas faire les 2 */
	     /* il faut recalculer les informations de vivacit� et de def-use 
		pour pouvoir le faire 2 fois de suite !!
	     */

	     bb->reg_rename();
	     cout<<"----- apres renommage ------"<<endl;
	     bb->display();
	     
	     // il faut annuler le calcul des d�pendances et le refaire
	     bb->reset_pred_succ_dep();
	     bb->comput_pred_succ_dep();
	     
	     int nbcycles_sched_rename = bb->nb_cycles();
	     cout<<"----nb_cycles apres renommage : "<< nbcycles_sched_rename <<"   ----"<<endl;
	     
	     d= new Dfg(bb);
	     cout << "comput critical path apres renommage" << endl;
	     
	     d->comput_critical_path();
	     cout << "critical path : "<< d->get_critical_path() << endl;
	     
	     // creation du DAG en version .dot avec le renommage 
	     string name_f_dfg = "./tmp/" + name + "_func_" + std::to_string(i) + "_dfg_bb" + std::to_string(bb->get_index()) + "_renamed.dot";	     
	     d->restitute(nullptr, name_f_dfg, true);
	     
	     // scheduling sur le code renomm�
	     d->scheduling(true);
	     
	     //cout<<"----  new scheduling: -----"<<endl;
	     //d->display_sheduled_instr();
	     d->apply_scheduling();
	     cout<<"---- renamed BB with new scheduling: -----"<<endl;
	     bb->display();
	     
	     // nombre de cycles du BB apr�s renommage et scheduling 
	     int nbcycles_sched_rename_sched = bb->nb_cycles();
	     cout<<"----nb_cycles apres renommage et scheduling : " << nbcycles_sched_rename_sched <<"----"<<endl;
	  
	     cout << "; gain renommage " << nbcycles_base - nbcycles_sched_rename ;
	     cout << "; gain renommage sched " << nbcycles_sched_rename - nbcycles_sched_rename_sched << endl;
	    
	   }
	}
	return 0;
}

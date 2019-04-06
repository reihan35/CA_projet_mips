#include <Function.h>

Function::Function(){
  _head = nullptr;
  _end = nullptr;
  BB_computed = false;
  label_computed = false;
  BB_pred_succ = false;
  dom_computed = false;
  
}

Function::~Function(){}

void Function::set_head(Line *head){
  _head = head;
}

void Function::set_end(Line *end){
  _end = end;
}

Line* Function::get_head(){
  return _head;
}

Basic_block* Function::get_firstBB(){
   return _myBB.front();
}

Line* Function::get_end(){
  return _end;
}

void Function::display(){
  cout<<"Begin Function"<<endl;
  Line* element = _head;

  while(element != _end){
    cout << element->get_content() <<endl;		
    element = element->get_next();
  }

  if (element == _end)	
    cout << _head->get_content() <<endl;

  cout<<"End Function\n\n"<<endl;
	
}

int Function::size(){
  Line* element = _head;
  int lenght=0;
  while(element != _end)
    {
      lenght++;		
      if (element->get_next()==_end)
	break;
      else
	element = element->get_next();
    }
  return lenght;
}	


void Function::restitution(string const filename){
	
	Line *element;
  ofstream monflux(filename.c_str(), ios::app);

  if(monflux){
    monflux<<"Begin"<<endl;
    if(element == _end)	
      monflux << _head->get_content() <<endl;
    while(element != _end)
      {
	if(element->isInst() || 
	   element->isDirective()) 
	  monflux<<"\t";
	
	monflux << element->get_content() ;
	
	if(element->get_content().compare("nop")) 
	  monflux<<endl;
		
	if(element->get_next()==_end){
	  if(element->get_next()->isInst() || 
	     element->get_next()->isDirective())
	    monflux<<"\t";
	  monflux << element->get_next()->get_content()<<endl;
	  break;
	}
	else element = element->get_next();

      }
    monflux<<"End\n\n"<<endl;
		
  }

  else {
    cout<<"Error cannot open the file"<<endl;
  }

  monflux.close();
}

void Function::comput_label(){
  if (label_computed) return; // on ne le fait qu'une fois
  Line* element = _head;

  if(element == _end && element->isLabel())	
    _list_lab.push_back(getLabel(element));
  while(element != _end)
    {

      if(element->isLabel())	
	_list_lab.push_back(getLabel(element));

      if(element->get_next()==_end){
	if(element->isLabel())	
	  _list_lab.push_back(getLabel(element));
	break;
      }
      else element = element->get_next();

    }
  label_computed = true;
}

int Function::nbr_label(){
  return _list_lab.size();

}

Label* Function::get_label(int index){

  int size=(int) _list_lab.size();
  if(index< size){
    int i = index; 
    for (auto label_fct: _list_lab) {
      if (i == 0)
	return label_fct;
      else
	i--;
    }
  }
  else cout<<"Error get_label : index is bigger than the size of the list, returns the last one (if any)"<<endl; 	
  return _list_lab.back();
}

Basic_block *Function::find_label_BB(OPLabel* label){
  for(auto bb : _myBB) {		
    if(bb ->is_labeled()){	 
      string str= bb ->get_head()->get_content();
      if (!str.compare(0, (str.size()-1),label->get_op())){
	return bb;
       }
    }
  }
  cout << "find_label_BB can't find a BB starting with " << label->to_string() << endl;
  return nullptr;
}


/* add_BB(debut, fin, br, index) cr�e un nouveau BB et 
 l'ajoute � la liste de BB de la fonction en le creant */
/* "debut" est l'entete, "fin" la derniere ligne du BB, "br" est une ligne contenant un saut ou vaut nullptr si le BB ne finit pas par un saut , "index" est le num�ro du BB */ 

void Function::add_BB(Line *debut, Line* fin, Line *br, int index){
   Basic_block *b = new Basic_block();
   b->set_head(debut);
   b->set_end(fin);
   b->set_index(index);
   b->set_branch(br);
   _myBB.push_back(b);
}


// Calcule la liste des blocs de base : il faut d�limiter les BB, en parcourant la liste des lignes (qui contiennent des directives, des labels ou des instructions) � partir de la premiere de la fonction, il faut s'arreter � chaque branchement (et prendre en compte le delayed slot qui appartient au meme BB, c'est l'instruction qui suit tout branchement) ou � chaque label (on estime que tout label est utilis� par un saut et donc correspond bien � une ent�te de BB).

// Pour cr�er un bloc il est conseiller d'utiliser la fonction addBB ci-dessus qui cr�e un BB et l'ajoute � la liste des BB de la fonction 
void Function::comput_basic_block(){
  
  bool verbose = false;  // passer � false pour moins d'affichage 
  if (verbose){
    cout << "comput BB" <<endl;
    cout<<" head:"<< _head->get_content()<<endl;
    cout<<" tail:"<< _end->get_content()<<endl;
  }
  if (BB_computed) return; // NE PAS TOUCHER, �vite de recalculer si d�j� fait

  // A REMPLIR 
    Line* current = _head;
    Line *debut_block = nullptr;
    int cpt_block = 0;


    Instruction *i=nullptr;
    string inst;

    while(current != _end){
    	if(current->isLabel()){
    		if(debut_block != nullptr){
    			add_BB(debut_block, current->get_prev(), nullptr, cpt_block);
    			cpt_block++;
    		}
			debut_block = current;

    	}
    	if(current->isInst()){
    		if(debut_block == nullptr){
    			debut_block = current;
    		}
    		i = getInst(current);
    		inst = i->string_opcode();
    		if(i->is_branch()){
    			add_BB(debut_block, current->get_next(), current, cpt_block);
    			debut_block = nullptr;
    			current = current->get_next();
				cpt_block++;
    		}
       }
    	current = current->get_next();
    }
  
  // FIN A REMPLIR 
  
  
  if (verbose)
    cout<<"end comput Basic Block"<<endl;
  
  
  // calcul effectu�, ne pas toucher ci-dessous
  BB_computed = true;
  return;
}

int Function::nbr_BB(){
   return _myBB.size();
}



Basic_block *Function::get_BB(int index){
   int size=(int)_myBB.size();
 
   if (index < size){
     int i = index;
     for (auto bb: _myBB){
       if (i == 0)
	 return bb;
       else i--;
     }
   }
   return nullptr;
}


/* comput_pred_succ calcule les successeurs (et pr�d�cesseur) des BB */
/* et it�rer sur tous les BB d'une fonction */
/* il faut determiner si un BB a un ou deux successeurs : d�pend de la pr�sence d'un saut pr�sent ou non � la fin */
/* pas de saut ou saut incontionnel ou appel de fonction : 1 successeur (lequel ?)*/
/* branchement conditionnel : 2 successeurs */ 
/* le bloc de sortie de fonction  n'a pas de successeurs - celui qui se termine par jr R31 */
/* les sauts indirects n'ont pas de successeur */
/* lorsque l'on a un successeur on l'ajoute au BB, et on ajoute BB comme pr�decesseur du successeur */

void Function::comput_succ_pred_BB(){
  
  if (BB_pred_succ) return; // on ne le fait qu'une fois 
  
  if (!BB_computed) 
    comput_basic_block();
  if (!label_computed) 
    comput_label();
 
 
  int size = (int) _myBB.size();
   
  for (auto bb: _myBB){ // parcours tous les BB de _myBB
    
    if(bb->get_branch() == nullptr && bb->get_index() < size-1){
    	bb->set_link_succ_pred(get_BB(bb->get_index()+1));
    }
    else {
    	auto label = getInst(bb->get_branch())->get_op_label();
        if(label != nullptr){
			Basic_block *b = find_label_BB(label);
			if(b != nullptr){
				bb->set_link_succ_pred(b);
			}
        }
    	Instruction *i = getInst(bb->get_branch());
    	if((i->is_cond_branch() || i->is_call()) && bb->get_index() < size-1){
    		bb->set_link_succ_pred(get_BB(bb->get_index()+1));
    	}

    }

    // fin � remplir
  } 
   
 
  // ne pas toucher ci-dessous
  BB_pred_succ = true; // calcul effectu�
  return;
}

void Function::compute_dom(){
 
  
  if (dom_computed) return; // on ne le fait qu'une fois

  if (!BB_pred_succ)
    comput_succ_pred_BB();   // on a besoin d'avoir calcul� les blocs pr�d�cesseurs et successeurs avant de calculer les dominants
  
 
   // on peut r�cup�rer les BB de la fonction avec la m�thode get_BB(num du BB) pour tous les num�ros de BB entre 0 et nbBB-1.

  list<Basic_block*> workinglist; // liste de travail  
  bool change = true;  // pour it�rer tant que pas de point fixe

  int sz = nbr_BB();
  for (auto bb: _myBB){
	  if(bb->get_nb_pred() == 0){
		  workinglist.push_back(bb);
	  }
  }

  while(workinglist.size() != 0){
	  Basic_block *bb = workinglist.front();
	  int bb_i = bb->get_index();
	  workinglist.pop_front();

	  change = false;

	  for(int j=0; j<sz; j++){
		  if(j==bb_i) continue;
		  bool domin = true;
		  auto bbDom = get_BB(j);
		  auto bbDom_j = bbDom->get_index();
		  int i;
		  for(i=0; i<bb->get_nb_pred(); i++){
			  int idpred = bb->get_predecessor(i)->get_index();
			  domin = domin && get_BB(idpred)->Domin[bbDom_j];
			  if(!domin) break;
		  }
		  if(i==0){
			  if(bb->Domin[j]) change = true;
			  bb->Domin[j] = false;
		  }
		  else{
			  if(!domin){
				  if(bb->Domin[j]) change = true;
				  bb->Domin[j] = false;
			  }
			  else{
				  if(!bb->Domin[j]) change = true;
				  bb->Domin[j] = true;
			  }
		  }
	  }
	  if (change){
		  for(int i=0; i<bb->get_nb_succ(); i++){
			  workinglist.push_back(bb->get_successor(i));
		  }
	  }
  }
 

  // affichage du resultat
  
  for (auto bb : _myBB){ // parcours des bb dans la liste des BB    
    cout << "Dominants pour BB" << bb -> get_index() << " : "; 
    for (int i = 0; i< nbr_BB(); i++){ // affichage des bloc dominants parmi les nbr_BB() bb de la fonction
      if (bb->Domin[i]) cout << " BB" << i  ;
    }
    cout << endl;
  }
  dom_computed = true;
  return;
}




void Function::compute_loops(){
  if (!BB_computed) 
    comput_basic_block();
  if (!BB_pred_succ) 
    comput_succ_pred_BB();
  if (!dom_computed)
    compute_dom();

  for(auto bb: _myBB){
	  int bb_i = bb->get_index();
	  for(int i=0; i<bb->get_nb_succ(); i++){
		  auto bbSucc = bb->get_successor(i);
		  if (bb->Domin[bbSucc->get_index()]){
			  _myLoop.push_back(new Loop(bbSucc, bb));
		  }
	  }
  }

  return;
}

void Function::display_loops(){
  cout << "Displaying the " << _myLoop.size() << " loops of the function" << endl;
  for(auto loop: _myLoop){
    loop->display();
  }

}

void Function::compute_live_var(){
 
  list<Basic_block*> workinglist;
  bool change = true;
 
   

  /* A REMPLIR avec algo vu en cours et en TD*/
 /* algorithme it�ratif qui part des blocs sans successeur, ne pas oublier que lorsque l'on sort d'une fonction le registre $2 contient le r�sultat (il est donc vivant), le registre pointeur de pile ($29) est aussi vivant ! */


 

 // fin � REMPLIR
}

void Function::show_live_var(void){
  // Affichage du resultat
 
  for (auto bb: _myBB){
    cout << "********* bb " << bb->get_index() << "***********" << endl;
    cout << "LIVE_OUT : " ;
    for(int i = 0; i < NB_REG; i++){
      if (bb->LiveOut[i]){
	cout << "$"<< i << " "; 
      }
    }
    cout << endl;
    cout << "LIVE_IN :  " ;
    for(int i = 0 ; i < NB_REG ; i++){
      if (bb->LiveIn[i]){
	cout << "$"<< i << " "; 
      }}
    cout << endl;
  }
  return;
 }
     



/* en implementant la fonction test de la classe BB, permet de tester des choses sur tous les blocs de base d'une fonction par exemple l'affichage de tous les BB d'une fonction ou l'affichage des succ/pred des BBs comme c'est le cas -- voir la classe Basic_block et la m�thode test */

void Function::test(){
  for(auto bb: _myBB){
    bb->test();
  }
   return;
}

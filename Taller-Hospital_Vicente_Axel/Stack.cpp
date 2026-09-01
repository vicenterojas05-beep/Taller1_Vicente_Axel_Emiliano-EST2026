#include "Stack.h"



Stack::Stack(){
	top=nullptr;
}

Stack::~Stack(){
	
	while(top!=nullptr){
		
		Nodo* borrar = top;
		top=top->getSiguiente();
		
		delete borrar->getPaciente();
		delete borrar;
	}
	
}

Nodo* Stack:: Top(){
	
	return top;
}

void Stack:: push(Nodo* n){
	
	n->setSiguiente(top);
	top=n;
}

void Stack::pop(){
	
	if(top==nullptr){
		return;
	}
	
	
	Nodo* borrar = top;
	top = top->getSiguiente();
	delete borrar;
}


bool Stack:: empty(){
	
	if(top==nullptr){
		
		return true;
	}
	
	else{
	    
		return false;	
	}
	
	
}




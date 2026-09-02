#include "Stack.h"



Stack::Stack(){
	top=nullptr;
}

Stack::~Stack(){
	
	while(top!=nullptr){
		
		Nodo* borrar = top;
		top=top->getSiguiente();
		
		delete borrar;  //no borra a los pacientes, de eso se encargara la clase lista. Esto para hacer que no haya un doble borrado
		                 //en el caso de que se haga delete queue y luego delete stack
	}
	
}

Nodo* Stack:: Top(){
	
	return top;
}

void Stack:: push(Paciente* pac){  
	Nodo* n = new Nodo(pac);
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




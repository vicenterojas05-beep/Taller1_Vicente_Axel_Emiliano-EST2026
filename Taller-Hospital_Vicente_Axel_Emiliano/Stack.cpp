#include "Stack.h"
#include <iostream>



Stack::Stack(){
	top=nullptr;
}

Stack::~Stack(){
	
	while(top!=nullptr){
		
		Nodo* borrar = top;
		top=top->getSiguiente();
		
		delete borrar;  //no borra a los pacientes, de eso se encargara la clase lista o queue. Esto para hacer que no haya un doble borrado
		                 //en el caso de que se haga delete queue y luego delete stack
	}
	
}

Nodo* Stack:: Top(){
	
	return top;
}

void Stack:: push(Paciente* p){  
	Nodo* n = new Nodo(p);
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

void Stack::mostrar_historial(){

	Nodo* cursor = top;
	while(cursor!=nullptr){
		Paciente* p = cursor->getPaciente();
		cout<<"Nombre: "<<p->getNombre()<<" | Edad: "<<p->getEdad()<<" | Departamento: "<<p->getServicio()<<endl;
		cursor = cursor->getSiguiente();
	}
	

}




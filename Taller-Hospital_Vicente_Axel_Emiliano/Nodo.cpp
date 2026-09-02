#include "Nodo.h"


Nodo::Nodo(Paciente* p){
	
	paciente = p;
	siguiente = nullptr;
}

Nodo::~Nodo(){
}

Paciente* Nodo::getPaciente(){
	return paciente;
}

Nodo* Nodo::getSiguiente(){
	return siguiente;
		
}

void Nodo:: setSiguiente(Nodo* s){
	
	siguiente = s;
}


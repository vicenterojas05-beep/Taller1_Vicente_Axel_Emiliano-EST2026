#include "Lista.h"
#include <iostream>



Lista::Lista(string s){
	
	servicio = s;
	pacientes = new Queue();
	siguiente = nullptr;
	
}

Lista::~Lista(){
}

void Lista::insertar(Nodo* p){
	
	pacientes->push(p);
}

void Lista::mostrar(){
	
	cout<<"=====Pacientes en "<<servicio<<"====="<<endl;
	
	Nodo* cursor = pacientes->front();
	
	
	while(cursor!=nullptr){
		cursor->getPaciente()->mostrar_info();
		cursor = cursor->getSiguiente();
	}
	
	
}

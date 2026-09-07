#include "Lista.h"
#include <iostream>



Lista::Lista(string s){
	
	servicio = s;
	pacientes = nullptr;
	siguiente = nullptr;
	ultimo = nullptr;
	
}

Lista::~Lista(){


	while(pacientes!=nullptr){
		Nodo* borrar = pacientes;
		pacientes=pacientes->getSiguiente();

		delete borrar->getPaciente(); //borra el paciente dentro del nodo
		delete borrar;//borra el nodo ya vacio

	}
}

void Lista::insertar(Paciente* pac){

	Nodo* p = new Nodo(pac);   //hacemos un nuevo nodo, ya que si le pasaramos el que sacamos de la cola, el nodo estaria en la lista de algun servicio
	                           // y en el stack del historial al mismo tiempo, por lo que el paciente dentro de este solo podria formar parte de una lista 
							   //(la lista del stack o la lista de pacientes del servicio), debido a que el nodo solo tiene UN atributo siguiente
	                        
	if(pacientes==nullptr){
		pacientes = p;
		ultimo = p;
	}

	else{

		ultimo->setSiguiente(p);
		ultimo=p;

	}
}

void Lista::mostrar(){
	
	cout<<"=====Pacientes en "<<servicio<<"====="<<endl;
	
	Nodo* cursor = pacientes;
	
	
	while(cursor!=nullptr){
		cursor->getPaciente()->mostrar_info();
		cursor = cursor->getSiguiente();
	}
	
	
}

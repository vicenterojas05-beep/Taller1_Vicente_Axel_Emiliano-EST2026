#include "Queue.h"



Queue::Queue(){
	
	head = nullptr;
	last= nullptr;
}

Nodo* Queue:: front(){
	
	return head;
}

void Queue:: pop(){
	
	if(head==nullptr){
		return;
	}
	
	Nodo* borrar = head;
	
	head = head->getSiguiente();
	
	delete borrar; //aclaracion : borra solo el nodo, no el paciente en su interior, esto en el caso de que el paciente se ocupe para
	                   //otra cosa siuuu
	
	
	
	
}

void Queue::push(Nodo* n){
	
	if(head==nullptr){
		head = n;
		last = head;
	}
	
	else{
		
		last->setSiguiente(n);
		last = n;
	}
	
	
	
}

bool Queue::empty(){
	
	if(head==nullptr){
		return true;
	}
	
	
	else{
		return false;
	}
	
	
}



Queue::~Queue(){
	
	while(head!=nullptr){
		
		
		Nodo* borrar = head;
		head = head->getSiguiente();
		
		
		delete borrar->getPaciente(); //borra el paciente del nodo
		
		delete borrar; //borra el nodo vacio
		
		
	}
}

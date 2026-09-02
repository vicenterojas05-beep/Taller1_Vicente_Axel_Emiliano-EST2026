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

	if(head==nullptr){  //esto es para cuando la queue solo tuviera un nodo, en este caso head seria nullptr pero last
						//	
		last=nullptr;
	}
	
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

		if(head==nullptr){
			last=nullptr;   //esto en el caso de que solo hubiera un Nodo en la cola, en este caso head quedaria en nullptr
			                //pero last seguiria apuntando en esa direccion en la que ya no hay nada, por eso mejor lo hacemos null
		}
		
		
		delete borrar;   //no borra a los pacientes, de eso se encargara la clase lista. Esto para hacer que no haya un doble borrado
		                 //en el caso de que se haga delete queue y luego delete stack
		
	}
}

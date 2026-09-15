#include "Nodo.h"

class Stack{
	
	private:
		
		Nodo* top;
		
	public:
		
		Stack();
		
		~Stack();
		
		
		Nodo* Top();
		
		void pop();
		
		void push(Paciente* p);
		
		bool empty();

		void mostrar_historial();
	
};




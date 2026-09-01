#include "Nodo.h"

class Stack{
	
	private:
		
		Nodo* top;
		
	public:
		
		Stack();
		
		~Stack();
		
		
		Nodo* Top();
		
		void pop();
		
		void push(Nodo* n);
		
		bool empty();
	
};




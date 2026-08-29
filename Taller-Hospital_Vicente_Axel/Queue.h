#include "Nodo.h"
using namespace std;


class Queue{
	
	private:
		
		Nodo* head;
		Nodo* last;
	
	public:
		
		Queue();
		
		~Queue();
		
		
		Nodo* front();
		
		void pop();
		
		void push(Nodo* n);
		
		bool empty();
		
		
		
	
};


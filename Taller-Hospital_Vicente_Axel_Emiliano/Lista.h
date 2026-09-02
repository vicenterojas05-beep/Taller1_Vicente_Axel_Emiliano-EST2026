#include "Nodo.h"
#include "Queue.h"




class Lista{
	
	private:
		
		string servicio;
		Lista* siguiente;
		Queue* pacientes;
		
	public:
		
		Lista(string s);
		~Lista();
		
		void insertar(Nodo* p);
		
		void mostrar();
		
		bool estaVacio();
		
		void setSiguiente(Lista* s);
		
		
};



#include "Nodo.h"
#include "Queue.h"




class Lista{
	
	private:
		
		string servicio;
		Lista* siguiente; //siguiente lista de servicio 
		Nodo* pacientes;
		Nodo* ultimo;	//ultimo paciente
		
	public:
		
		Lista(string s);
		~Lista();
		
		void insertar(Paciente* p);
		
		void mostrar();
		
		bool estaVacio();
		
		void setSiguiente(Lista* s);
		
		
};



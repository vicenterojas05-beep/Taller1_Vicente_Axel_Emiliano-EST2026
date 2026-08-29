#include "Paciente.h"
using namespace std;


class Nodo{
	
	private:
		
		Paciente* paciente;
		
		Nodo* siguiente;
		
	public:
		
		
		Nodo(Paciente* p);
		
		~Nodo();
		
		Paciente* getPaciente();
		
		Nodo* getSiguiente();
		
		void setSiguiente(Nodo* s);
};

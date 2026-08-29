#include "Persona.h"


class Paciente: public Persona{
	
	private:
		string id;
		string servicio;
		
	public:
		
		Paciente(string n, int e, string i , string s);
		~Paciente() override;
	
	
};

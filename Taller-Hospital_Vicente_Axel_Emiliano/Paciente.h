#include "Persona.h"
#pragma once

class Paciente: public Persona{
	
	private:
		string id;
		string servicio;
		
	public:
		
		Paciente(string n, int e, string i , string s);
		 ~Paciente() override;
		
		string getId();
		string getServicio();
		void mostrar_info();
	
	
};

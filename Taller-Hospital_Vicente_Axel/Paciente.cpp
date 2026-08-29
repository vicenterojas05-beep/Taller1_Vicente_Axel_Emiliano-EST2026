#include "Paciente.h"


Paciente::Paciente(string n, int e, string i , string s) : Persona(n,e){
	
	this->id = i;
	this->servicio = s;
}

Paciente::~Paciente(){
}

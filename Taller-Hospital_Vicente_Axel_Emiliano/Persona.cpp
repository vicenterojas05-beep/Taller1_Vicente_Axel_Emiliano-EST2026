
#include "Persona.h"

Persona::Persona(string n, int e){
	this->nombre = n;
	this->edad = e;
}

Persona::~Persona(){

}

string Persona::getNombre(){
	
	return nombre;
}

int Persona::getEdad(){
	return edad;
} 

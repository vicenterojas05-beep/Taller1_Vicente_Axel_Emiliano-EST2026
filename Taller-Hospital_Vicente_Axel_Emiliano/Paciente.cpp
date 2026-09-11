#include "Paciente.h"
#include <iostream>


Paciente::Paciente(string n, int e, string i , string s) : Persona(n,e){
	
	this->id = i;
	this->servicio = s;
}

Paciente::~Paciente(){
}


string Paciente::getId(){
	return id;
}

string Paciente::getServicio(){
	return servicio;
}

void Paciente::mostrar_info(){
	cout<<"ID= "<<id<<"||"<<"NOMBRE= "<<getNombre()<<"||"<<"EDAD= "<<getEdad()<<"||"<<"SERVICIO= "<<getServicio()<<endl;
}

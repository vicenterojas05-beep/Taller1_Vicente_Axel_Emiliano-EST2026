
using namespace std;
#pragma once
#include <string>
class Persona{
	
	private:
		
		string nombre;
		int edad;
		
	public:
		
		Persona(string n, int e);
		virtual ~Persona();
		
		string getNombre();
		
		int getEdad();
	
	
		
		
};

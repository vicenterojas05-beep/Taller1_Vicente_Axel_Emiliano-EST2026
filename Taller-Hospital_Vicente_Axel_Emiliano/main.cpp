#include <iostream>
#include <fstream>
#include <string>
#include "Paciente.h"
#include "Queue.h"

using namespace std;

void Leerarchivo(Queue* pacientes) {
    ifstream archivo("pacientes.txt");

    if (!archivo.is_open()) {
        cout << "Error: No se pudo abrir el archivo." << endl;
        return;
    }

    
    char linea[200]; 

    //la línea directamente sobre el arreglo
    while (archivo.getline(linea, 200)) {
        
        //puntero apuntando a la primera letra del arreglo
        char* puntero = linea; 
        
        string id = "";
        string nombre = "";
        string edad = "";
        string servicio = "";

       // ID
        while (*puntero != ';' && *puntero != '\0') {
            id += *puntero;
            puntero++; 
        }
        puntero++; // saltamos por encima del ';'

        // NOMBre
        while (*puntero != ';' && *puntero != '\0') {
            nombre += *puntero;
            puntero++; 
        }
        puntero++; 

        // EDAD
        while (*puntero != ';' && *puntero != '\0') {
            edad += *puntero;
            puntero++; 
        }
        puntero++; 

        // SERVICIO
        // ultimo dato, no hay un ';' al final
        
        while (*puntero != '\0') {
            servicio += *puntero;
            puntero++; 
        }

		int edadn = stoi(edad); 

		Paciente* p = new Paciente(nombre,edadn,id,servicio); 
		Nodo* n = new Nodo(p);
		pacientes->push(n);

        
    }

    archivo.close();
}








int main(int argc, char** argv) {
	Queue* cola = new Queue();
	Leerarchivo(cola);

	while(!cola->empty()){
		cola->front()->getPaciente()->mostrar_info();
		cola->pop();
	}
	return 0;
}

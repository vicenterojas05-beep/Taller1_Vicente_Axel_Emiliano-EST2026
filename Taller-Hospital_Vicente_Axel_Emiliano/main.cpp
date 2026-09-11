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

void menu(){

    cout<<"===  HOSPITAL MARMAJA  ==="<<endl;
    cout<<"1. Atender pacientes"<<endl;
    cout<<"2. Ver departamentos"<<endl;
    cout<<"3. Revisar el historial de atención"<<endl;
    cout<<"4. Salir"<<endl;
}








int main(int argc, char** argv) {
	Queue* cola = new Queue();
	Leerarchivo(cola);

    int opcion = 0;

    do{

        menu();
        cout<<"Ingrese una opción: ";
        cin >> opcion;

        switch(opcion){

            case 1:
            cout<<"Falta la funcion atender"<<endl;
            break;

            case 2:

            cout<<"Falta la funcion"<<endl;
            break;;

            case 3:

            cout<<"Falta la funcion"<<endl;
            break;

            case 4:

            cout<<"Hasta luego :D"<<endl;
            break;
            

        }

        



    }while(opcion!=4);
    

	
	return 0;
}

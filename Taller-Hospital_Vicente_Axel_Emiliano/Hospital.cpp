#include "Hospital.h"
#include <iostream>


Hospital::Hospital(){
    urgencias= new Lista("Urgencias");
        Lista* medicina_general= new Lista("Medicina General");
        Lista* cardiologia = new Lista("Cardiologia");
        Lista* neurologia=new Lista("Neurologia");
        Lista* traumatologia=new Lista("Traumatologia");
        Lista* cirugia=new Lista("Cirugia");
        Lista* pediatria=new Lista("Pediatria");
        Lista* hospitalizacion=new Lista("Hospitalizacion");

        urgencias->setSiguiente(medicina_general);
        medicina_general->setSiguiente(cardiologia);
        cardiologia->setSiguiente(neurologia);
        neurologia->setSiguiente(traumatologia);
        traumatologia->setSiguiente(cirugia);
        cirugia->setSiguiente(pediatria);
        pediatria->setSiguiente(hospitalizacion); 


}

Lista* Hospital::getServicio(int s){
    if(s<=0){
        cout<<"Error: ingreso un numero mayor que 0"<<endl;
        return nullptr;
    }
    Lista* cursor = urgencias;
    for(int i = 0; i<s-1; i++){
        if(cursor==nullptr){
            cout<<"Error: servicio no existente"<<endl;
            break;
        }
        cursor=cursor->getNext();
    }
    return cursor;
}

Hospital::~Hospital(){
    while(urgencias!=nullptr){
        Lista* borrar = urgencias;
        urgencias = urgencias->getNext();

        delete borrar;
    }

}

void Hospital::mostrar_servicios(){
    Lista* cursor = urgencias;
    int cont = 1;
    while(cursor!=nullptr){
        cout<<cont<<". "<<cursor->getServicio()<<endl;
        cursor = cursor->getNext();
        cont++;
    }

    
}

void Hospital::ingresar_paciente(Paciente* p){
    Lista* cursor = urgencias;

    while(cursor!=nullptr){
        if(p->getServicio()==cursor->getServicio()){
            cursor->insertar(p);
            return;
        }
        cursor=cursor->getNext();
    }
    cout<<"ERROR SERVICIO DE PACIENTE NO ENCONTRADO, VERIFICAR SI ESTA ESCRITO CORRECTAMENTE Y SACAR DE HISTORIAL"<<endl;

}

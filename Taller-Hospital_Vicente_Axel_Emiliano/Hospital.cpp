#include "Hospital.h"


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

Lista* Hospital::getServicios(){
    return urgencias;
}

Hospital::~Hospital(){
    while(urgencias!=nullptr){
        Lista* borrar = urgencias;
        urgencias = urgencias->getNext();

        delete borrar;
    }

}

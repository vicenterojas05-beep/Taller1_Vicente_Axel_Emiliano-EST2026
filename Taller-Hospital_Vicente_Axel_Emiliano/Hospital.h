#include "Lista.h"

class Hospital{
    private:

    Lista* urgencias;

    public:

    Hospital();
    ~Hospital();

    Lista* getServicio(int s); //funcion que devuelve un servicio en especifico segun la opcion seleccionada en el menu
    void mostrar_servicios();

    void ingresar_paciente(Paciente* p); //ingresa al paciente al servicio correspondiente

    
};
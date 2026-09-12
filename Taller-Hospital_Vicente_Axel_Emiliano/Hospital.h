#include "Lista.h"

class Hospital{
    private:

    Lista* urgencias;

    public:

    Hospital();
    ~Hospital();

    Lista* getServicio(int s); //funcion que devuelve un servicio en especifico segun la opcion seleccionada en el menu
    void mostrar_servicios();

    
};
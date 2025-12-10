#include <iostream>

class Persona{
    public:
        int edad;
        char *nombre;
        char  *direccion;
};

int main(){
    Persona objeto;
    objeto.edad = 20;
    objeto.nombre = "Juan";
    objeto.direccion = "Calle Falsa 123";

    std::cout << "Nombre: " << objeto.nombre << std::endl;
    std::cout << "Edad: " << objeto.edad << std::endl;
    std::cout << "Direccion: " << objeto.direccion << std::endl;
    return 0;
}
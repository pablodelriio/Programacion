#include <iostream>
struct Direccion{
std::string calle;
int numero;
std::string ciudad;
std::string pais;
}

Direccion crearDireccion(std::string calle, int numero, std::string ciudad, std::string pais){
    Direccion dir;
    dir.calle = calle;
    dir.numero = numero;
    dir.ciudad = ciudad;
    dir.pais = pais;
    return dir;
}
#include <iostream>
struct Direccion {
  std::string calle;
  int numero;
  std::string ciudad;
  std::string codigo_postal;
};
int main() { 
    Direccion direccion_casa;
    direccion_casa.calle = "Avenida Ejemplo";
    direccion_casa.numero = 42;
    direccion_casa.ciudad = "Ejemplo City";
    direccion_casa.codigo_postal = "12345";
    
    std::cout << "Calle: " << direccion_casa.calle << std::endl;
    std::cout << "Numero: " << direccion_casa.numero << std::endl;
    std::cout << "Ciudad: " << direccion_casa.ciudad << std::endl;
    std::cout << "Codigo Postal: " << direccion_casa.codigo_postal << std::endl;
} 
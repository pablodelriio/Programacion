// Ejercicio 1 -- Mostrar datos basicos
// Crea un programa que declare tres variables 
// (tu nombre, tu edad y tu nota media) y muestre esos datos por pantalla.
#include <iostream>
int main() {
    std::string nombre = "Pablo del Rio";
    int edad = 19;
    double nota = 10.0;

    std::cout << "Nombre: " << nombre << std::endl;
    std::cout << "Edad: " << edad << std::endl;
    std::cout << "Nota media: " << nota << std::endl;
}
#include <iostream>

int main(){
    int x = 10;
    int &ref_x = x; // ref_x es una referencia a x
    std::cout << "Valor de x: " << x << std::endl;         // Muestra 10
    std::cout << "Valor de ref_x: " << ref_x << std::endl   ; // Muestra 10
    ref_x = 20; // Cambia el valor de x a través de la referencia
    std::cout << "Nuevo valor de x: " << x << std::endl;     // Muestra 20
    std::cout << "Valor de ref_x despues del cambio: " << ref_x << std::endl; // Muestra 20

}

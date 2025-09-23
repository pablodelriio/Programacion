#include <iostream>

// esta funcion tiene dos cosas que hacer, imprimir por pantalla y devolver un valor de una suma
// no es buena practica hacer dos cosas en una funcion
// lo correcto seria que la funcion solo devolviera el valor de la suma y que el main se encargara de imprimir

int Add(int x, int y){
    std::cout << "En Add(), recibido" << x << " y " << y << "\n";
    return (x+y);
}

int main() {
    std::cout << "En main()\n";
    std::cout << "\nllamada a Add ()\n";
    std::cout << "El valor devuelto es:" << Add(3,4);
    std::cout << "\nVuelta al main ().\n";
    std::cout << "\nsaliendo.\n\n";
    return 0;
}
#include <iostream>

using namespace std;
int funcion(int ref) { // ref es una referencia a un entero
    ref += 10; // Modifica el valor original
    return ref;
}
int main() {
    int valor = 5;
    cout << "Valor original: " << valor << endl; // Muestra 5
    int resultado = funcion(valor); // Pasa valor por referencia
    cout << "Valor modificado: " << valor << endl; // Muestra 15
    cout << "Resultado de la funcion: " << resultado << endl; // Muestra 15
    return 0;
}
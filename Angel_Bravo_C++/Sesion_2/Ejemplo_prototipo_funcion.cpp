#include <iostream>
// Hay un error ya que cuando se llega al main, el compilador no sabe que es suma
// Para solucionarlo se usa un prototipo de funcion antes del main
int suma(int a, int b); // Pototipo de la funcion
// El prototipo indica al compilador que existe una funcion llamada suma que recibe dos enteros y devuelve un entero
// El prototipo no es obligatorio pero es una buena practica para mejorar la legibilidad del codigo

int main(){
    int resultado = suma(5,3); //lamada a la funcion
    std::cout << "Resultado:" << resultado << std::endl;
    return 0;
}
// definiciopn de la funcion
int suma(int a, int b){
    return a + b;
}    
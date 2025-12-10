#include <iostream>

float multiplicacion (int a, float b){
    return (a * b);
}

int main(){
    int numero = 0;
    float factor = 0.0;
    std::cout << "Introduce un numero entero: " ;
    std::cin >> numero;

    std::cout << std::endl;
    
    std::cout << "Introduce un numero decimal: " ;
    std::cin >> factor;

    float resultado = multiplicacion(numero, factor);
    std::cout << "El resultado de la multiplicacion es: " << resultado << std::endl;
    return 0;
}
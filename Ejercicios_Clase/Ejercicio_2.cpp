// Ejercicio_2 -- Operaciones Matematicas
// Pide al usuario dos números enteros y 
// muestra su suma, resta, multiplicación y división.
#include <iostream>



int main(){
    int num1;
    int num2;
    std::cout << "Ingrese el primer numero entero: ";
    std::cin >> num1;
    std::cout << "Ingrese el segundo numero entero: ";
    std::cin >> num2;

    int suma = num1 + num2;
    int resta = num1 - num2;
    int multiplicacion = num1 * num2;
    double division = num1 / num2;

    std::cout << "La suma es: " << suma << std::endl;
    std::cout << "La resta es: " << resta << std::endl;
    std::cout << "La multiplicacion es: " << multiplicacion << std::endl;
    std::cout << "La division es: " << division << std::endl;
}
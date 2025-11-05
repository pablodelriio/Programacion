// Ejercicio_3 Calcular área de un rectángulo
// Solicita al usuario la base y la altura de un 
// rectángulo y muestra su área.
#include <iostream>
int main() {
    double base;
    double altura;
    std::cout << "Ingrese la base del rectangulo: ";
    std::cin >> base;
    std::cout << "Ingrese la altura del rectangulo: ";
    std::cin >> altura;

    double area = base * altura;
    std::cout << "El area del rectangulo es: " << area << std::endl;
}
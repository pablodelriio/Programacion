#include <iostream>

main(){
    int numero;
    std::cout << "Introduce un numero entero: ";
    std::cin >> numero;
    if (numero % 2 == 0)
        std::cout << "El numero es par" << std::endl;
    else
        std::cout << "El numero es impar" << std::endl; 
    return 0;
}
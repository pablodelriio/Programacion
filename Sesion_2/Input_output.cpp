#include <iostream>

int main(){
    int edad;
    std::cout << "Dime tu edad: ";
    std::cin >> edad;

    if (edad >= 18)
        std::cout << "Eres mayor de edad" << std::endl;
    else
        std::cout << "Eres menor de edad" << std::endl;
    return 0;
}
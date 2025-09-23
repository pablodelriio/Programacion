//Sobrecargar las funciones permite definir múltiples funciones con el mismo nombre pero con diferentes tipos o números de parámetros.
//El compilador determina qué función llamar en función de los argumentos proporcionados.
//Esto sirve para mejorar la legibilidad del código y evitar nombres de funciones redundantes.
#include <iostream> 

int suma(int a, int b){
    return a + b;
}   
float suma(float a, float b){
    return a + b;
}
int main(){
    int x = 5, y = 10;
    float m = 5, n = 10.5;
    std::cout << "Suma de enteros: " << suma(x, y) << std::endl;
    std::cout << "Suma de flotantes: " << suma(m, n) << std::endl;
    return 0;
}   
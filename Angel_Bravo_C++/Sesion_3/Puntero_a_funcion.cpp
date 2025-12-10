#include <iostream>

int suma(int a, int b){
    return a + b;
}  
int resta(int a, int b){
    return a - b;
    }
    
void aplicar_operacion(int x, int y, int (*f)(int, int)){
    int resultado = f(x, y);
    std::cout << "El resultado es: " << resultado << std::endl;
}
int main(){
    int a = 10, b = 5;
    aplicar_operacion(a, b, suma);
    aplicar_operacion(a, b, resta);
    return 0;
}  


#include <iostream>

int intercambiar(int &a, int &b){ // a y b son referencias a enteros lo que quiere decir que cualquier cambio en a o b afectara a las variables originales ya que no se crea una "copia"
    int temp = a;     
    a = b;
    b = temp;
    return 0;
}
int main(){
    int x = 10;
    int y = 20;
    std::cout << "Antes de intercambiar: x = " << x << ", y = " << y << std::endl;
    intercambiar(x, y);
    std::cout << "Despues de intercambiar: x = " << x << ", y = " << y << std::endl;
    return 0;
}
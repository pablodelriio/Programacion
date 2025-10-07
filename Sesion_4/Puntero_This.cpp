#include <iostream>
class MiClase{
private:
    int valor;

public:
    MiClase(int valor){
    this->valor = valor; // Asignar el valor al miembro de la clase
    }
    void mostrarValor(){
        std::cout << "Valor: " << this->valor << std::endl; // Usar this para acceder al miembro de la clase
    }
};
int main(){
    MiClase obj(42); // Crear un objeto de MiClase con valor 42
    obj.mostrarValor(); // Mostrar el valor del objeto
    return 0;
}
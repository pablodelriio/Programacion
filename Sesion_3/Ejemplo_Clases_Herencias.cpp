#include <iostream>
#include <string>

// Clase base
class Persona {
public:
    std::string nombre;
    int edad;

    void mostrarDatos() {
        std::cout << "Nombre: " << nombre << std::endl;
        std::cout << "Edad: " << edad << std::endl;
    }
};

// Clase derivada
class Estudiante : public Persona {
public:
    std::string carrera;

    void mostrarDatos() {
        // Llama al método de la clase base
        Persona::mostrarDatos();
        std::cout << "Carrera: " << carrera << std::endl;
    }
};

int main() {
    Estudiante estudiante1;
    estudiante1.nombre = "Ana";
    estudiante1.edad = 20;
    estudiante1.carrera = "Ingenieria";

    estudiante1.mostrarDatos();

    return 0;
}


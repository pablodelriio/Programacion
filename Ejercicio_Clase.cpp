#include <iostream>
#include <string>

class Alumno {
public: 
    std::string nombre;
    int nota;
};
int promedio(int nota) {
    int cantidad = 4;
    double promedio = nota / cantidad;
        std::cout << "El promedio de las notas es: " << promedio << std::endl;
    return promedio;
    }
int main() {
    int cantidad = 0;
    std::cout << "Ingrese el numero de alumnos: ";
    std::cin >> cantidad;

    if (cantidad >= 30) {
        std::cout << "Demasiados alumnos, introduzca otro número." << std::endl;
        return 0;
    }

    Alumno alumnos[30]; 

    for (int i = 0; i < cantidad; ++i) {
        std::cout << "\nAlumno " << i + 1 << ":" << std::endl;

        std::cout << "Ingrese el nombre: ";
        std::cin >> alumnos[i].nombre;

        std::cout << "Ingrese la nota: ";
        std::cin >> alumnos[i].nota;

        int media = promedio(alumnos[i].nota);
        std::cout << "la media es: " << media << std::endl;
    }
}
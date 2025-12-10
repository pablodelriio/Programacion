

#include <iostream>
#include <cctype>

int transformar_calificacion(char calificacion){
    calificacion = toupper(calificacion);
    if (calificacion == 'A')
        return 0;
    else if (calificacion == 'B')
        return 1;
    else
        return -1; // Para manejar otros casos
}

int main(){
    char calificacion;
    int calificacion_final;

    std::cout << "Introduce una calificacion (A, F) ";
    std::cin >> calificacion;
    calificacion_final = transformar_calificacion(calificacion);
    if (calificacion_final == 0)
        std::cout << "Has aprobado" << std::endl;
    else 
        std::cout << "Has suspendido" << std::endl;
    return 0;
}

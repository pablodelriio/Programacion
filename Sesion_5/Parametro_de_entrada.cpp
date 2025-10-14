#include <iostream>
// argc: numero de argumentos
// argv: vector de argumentos (array de cadenas de caracteres)
// argv[0]: nombre del programa
// argv[1]: primer argumento
int main(int argc, char *argv[]){
    std::cout << "Numero de argumentos: " << argc << std::endl;
    for(int i = 0; i < argc; i++){
        std::cout << "Argumento " << i << ": " << argv[i] << std::endl;
    }
    return 0;
}
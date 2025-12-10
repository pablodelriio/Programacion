#include <iostream>
using namespace std;
int main(){
    int numero;
    int *ptr = &numero;
    int numeroPosterior;
    
    numero = 100;
    numeroPosterior = *ptr;
    cout << numeroPosterior << endl;
    cout << *ptr << endl;
    *ptr = 700;
    cout << *ptr << endl;
    cout << numeroPosterior << endl;
    cout << numero << endl;
    
    cout << &numero << endl;
    cout << ptr << endl;
    cout << &ptr << endl;

    return 0;
}
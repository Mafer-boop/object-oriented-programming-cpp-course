#include <iostream>

using namespace std;

unsigned long fibonacci(unsigned long n){

    if (n == 0 || n == 1){
        return n;
    }

    return fibonacci(n - 1) + fibonacci(n -2);
}

int main (){

    unsigned long numero;

    cout << "Introduce un numero entero: ";
    cin >> numero;

    cout << "Fibonacci ("
         << numero 
         << ") = "
         << fibonacci(numero)
         << endl;

    return 0;
}
#include <iostream>

using namespace std;

int factorial(int n) {

    if (n == 0 || n == 1) {
        return 1;
    }

    return n * factorial(n - 1);
}

int main() {

    int numero;

    cout << "Introduce un numero entero: ";
    cin >> numero;

    cout << "El factorial de "
         << numero
         << " es: "
         << factorial(numero)
         << endl;

    return 0;
}
#include <iostream>
using namespace std;

void saludar() {
    cout << "Hola, esta es una funcion basica." << endl;
}

int sumar(int a, int b) {
    return a + b;
}

int main() {
    saludar();

    int x = 5, y = 10;
    cout << "La suma es: " << sumar(x, y) << endl;

    return 0;
}
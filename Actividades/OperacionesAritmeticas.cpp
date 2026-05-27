#include <iostream>

using namespace std;

int main() {

    // Declaracion de variables
    float n1, n2;

    // Solicitar valores
    cout << "Introduce el primer numero: ";
    cin >> n1;

    cout << "Introduce el segundo numero: ";
    cin >> n2;

    // Operaciones aritmeticas
    cout << "\nEl resultado de sumar "
         << n1 << " y " << n2
         << " es: " << n1 + n2 << endl;

    cout << "El resultado de restar "
         << n1 << " y " << n2
         << " es: " << n1 - n2 << endl;

    cout << "El resultado de multiplicar "
         << n1 << " y " << n2
         << " es: " << n1 * n2 << endl;

    cout << "El resultado de dividir "
         << n1 << " y " << n2
         << " es: " << n1 / n2 << endl;

    return 0;
}
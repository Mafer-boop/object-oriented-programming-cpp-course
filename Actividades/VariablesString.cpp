#include <iostream>
#include <string>

using namespace std;

int main() {

    // Declaracion de variable
    string miNombre;

    // Solicitar nombre
    cout << "Introduce tu nombre: ";
    cin >> miNombre;

    // Mostrar mensaje
    cout << "Hola " << miNombre
         << " Bienvenido al mundo C++!!"
         << endl;

    return 0;
}
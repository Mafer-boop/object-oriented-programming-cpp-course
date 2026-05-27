#include <iostream>

using namespace std;

int main() {

    // Declaracion de variables
    float precioBase;
    float iva;
    float precioFinal;

    // Solicitar datos
    cout << "Introduce el precio base del producto: ";
    cin >> precioBase;

    cout << "Introduce el porcentaje de IVA: ";
    cin >> iva;

    // Calculo del precio final
    precioFinal = precioBase + (precioBase * iva / 100);

    // Mostrar resultado
    cout << "\nEl precio del producto con el "
         << iva << "% de IVA es: "
         << precioFinal << endl;

    return 0;
}
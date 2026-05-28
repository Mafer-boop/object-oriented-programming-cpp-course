#include <iostream>

using namespace std;

int cuadradoPorValor(int n) {

    return n * n;
}

void cuadradoPorReferencia(int &n) {

    n = n * n;
}

int main() {

    int x = 2;
    int y = 4;

    cout << "x antes de cuadradoPorValor: "
         << x << endl;

    cout << "Resultado: "
         << cuadradoPorValor(x)
         << endl;

    cout << "x despues de cuadradoPorValor: "
         << x << endl;

    cout << "\ny antes de cuadradoPorReferencia: "
         << y << endl;

    cuadradoPorReferencia(y);

    cout << "y despues de cuadradoPorReferencia: "
         << y << endl;

    return 0;
}
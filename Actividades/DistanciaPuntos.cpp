#include <iostream>
#include <cmath>

using namespace std;

int main() {

    double x1, y1, x2, y2;
    double distancia;

    cout << "Introduce x1: ";
    cin >> x1;

    cout << "Introduce y1: ";
    cin >> y1;

    cout << "Introduce x2: ";
    cin >> x2;

    cout << "Introduce y2: ";
    cin >> y2;

    distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    cout << "\nLa distancia entre los puntos ("
         << x1 << ", " << y1 << ") y ("
         << x2 << ", " << y2 << ") es: "
         << distancia << endl;

    return 0;
}
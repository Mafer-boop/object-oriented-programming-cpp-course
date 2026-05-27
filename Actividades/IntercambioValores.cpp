#include <iostream>

using namespace std;

int main() {

    double num1, num2, auxiliar;

    cout << "Introduce el valor de num1: ";
    cin >> num1;

    cout << "Introduce el valor de num2: ";
    cin >> num2;

    cout << "\nValores originales:" << endl;
    cout << "num1 = " << num1 << endl;
    cout << "num2 = " << num2 << endl;

    auxiliar = num1;
    num1 = num2;
    num2 = auxiliar;

    cout << "\nValores intercambiados:" << endl;
    cout << "num1 = " << num1 << endl;
    cout << "num2 = " << num2 << endl;

    return 0;
}
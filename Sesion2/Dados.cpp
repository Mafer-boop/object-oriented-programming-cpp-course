#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int lanzarDado() {
    return 1 + rand() % 6;
}

int main() {

    srand(time(0));

    int dado1 = lanzarDado();
    int dado2 = lanzarDado();

    int suma = dado1 + dado2;

    cout << "Dado 1: " << dado1 << endl;
    cout << "Dado 2: " << dado2 << endl;
    cout << "Suma: " << suma << endl;

    return 0;
}
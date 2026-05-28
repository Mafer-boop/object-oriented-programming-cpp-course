#include <iostream>

using namespace std;

int cuadrado(int n){

    return n * n;
}

double cuadrado(double n){

    return n * n;
}

int main(){

    cout << "Cuadrado de entero 7: "
         << cuadrado(7)
         << endl;

    cout << "Cuadrado de double 7.5: "
         << cuadrado(7.5)
         << endl;

    return 0;
}
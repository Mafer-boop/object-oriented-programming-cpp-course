#include <iostream>

using namespace std;

int x = 1;

void funcionLocal() {

    int x = 25;

    cout << "Variable local en funcionLocal: "
         << x << endl;
}

void funcionStatic() {

    static int x = 50;

    cout << "Variable static antes: "
         << x << endl;

    x++;

    cout << "Variable static despues: "
         << x << endl;
}

void funcionGlobal() {

    cout << "Variable global antes: "
         << x << endl;

    x *= 10;

    cout << "Variable global despues: "
         << x << endl;
}

int main() {

    int x = 5;

    cout << "Variable local en main: "
         << x << endl;

    funcionLocal();

    funcionStatic();

    funcionGlobal();

    funcionStatic();

    funcionGlobal();

    return 0;
}
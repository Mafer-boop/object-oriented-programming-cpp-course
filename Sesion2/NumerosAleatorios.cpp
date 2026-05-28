#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {

    srand(time(0));

    cout << "Numeros aleatorios del 1 al 6:" << endl;

    for (int i = 1; i <= 10; i++) {
        cout << 1 + rand() % 6 << endl;
    }

    return 0;
}
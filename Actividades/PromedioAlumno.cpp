#include <iostream>
#include <string>

using namespace std;

int main() {

    string nombreAlumno;
    float cal1, cal2, cal3;
    float promedio;

    cout << "Introduce el nombre del alumno: ";
    cin >> nombreAlumno;

    cout << "Introduce la calificacion 1: ";
    cin >> cal1;

    cout << "Introduce la calificacion 2: ";
    cin >> cal2;

    cout << "Introduce la calificacion 3: ";
    cin >> cal3;

    promedio = (cal1 + cal2 + cal3) / 3;

    cout << "\nEl promedio de "
         << nombreAlumno
         << " es: "
         << promedio
         << endl;

    return 0;
}
#include <iostream>
#include <string>

using namespace std;

int main() {
    string arreglo1[2][1] = {{"fernando"}, {"oscar"}};
    int arreglo2[3][1] = {{74}, {56}, {10}};

    cout << "Arreglo 1:\n";
    for (int i = 0; i < 2; ++i) {
        cout << "Dato de la posicion " << i << " = " << arreglo1[i][0] << endl;
    }

    cout << "\nArreglo 2:\n";
    for (int i = 0; i < 3; ++i) {
        cout << "Dato de la posicion " << i << " = " << arreglo2[i][0] << endl;
    }

    return 0;
}
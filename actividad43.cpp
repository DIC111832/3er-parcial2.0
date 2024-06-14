#include <iostream>

using namespace std;

int main() {
    int filas, columnas;


    cout << "Ingrese el numero de filas: ";
    cin >> filas;
    cout << "Ingrese el numero de columnas: ";
    cin >> columnas;

    if (filas <= 0 || columnas <= 0) {
        cout << "El número de filas y columnas debe ser positivo.\n";
    } else {

        int matriz[filas][columnas];
        for (int i = 0; i < filas; ++i) {
            for (int j = 0; j < columnas; ++j) {
                cout << "Ingrese el valor para matriz[" << i + 1 << "][" << j + 1 << "]: ";
                cin >> matriz[i][j];
            }
        }

        cout << "La matriz es:\n";
        for (int i = 0; i < filas; ++i) {
            for (int j = 0; j < columnas; ++j) {
                cout << matriz[i][j] << "\t";
            }
            cout << endl;
        }

        cout << "La suma de las columnas es:\n";
        for (int j = 0; j < columnas; ++j) {
            int suma_columna = 0;
            for (int i = 0; i < filas; ++i) {
                suma_columna += matriz[i][j];
            }
            cout << "Columna " << j + 1 << ": " << suma_columna << endl;
        }
    }

    return 0;
}
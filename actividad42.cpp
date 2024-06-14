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

        int fila, columna;
        cout << "Ingrese el numero de fila a mostrar: ";
        cin >> fila;
        cout << "Ingrese el numero de columna a mostrar: ";
        cin >> columna;

        if (fila >= 1 && fila <= filas && columna >= 1 && columna <= columnas) {
            cout << "El elemento en la posición [" << fila << "][" << columna << "] es: " << matriz[fila - 1][columna - 1] << "\n";
        } else {
            cout << "La posición ingresada es inválida.\n";
        }
    }

    return 0;
}
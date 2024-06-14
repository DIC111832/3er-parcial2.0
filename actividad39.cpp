#include <iostream>
using namespace std;
int main() {

    int n;

    cout << "Ingrese el numero de posiciones: ";
    cin >> n;

    int numeros[100];

    int positivos = 0;
    int negativos = 0;

    if (n <= 0 || n > 100) 
    {
        cout << "El tamaño debe ser un número positivo y no mayor a 100.\n";
        n = 0; 
    } 
    else
    {
        for (int i = 0; i < n; ++i) 
        {
            cout << "Ingrese el numero para la posicion " << (i + 1) << ": ";
            cin >> numeros[i];
        }

        for (int i = 0; i < n; ++i) 
        {
            if (numeros[i] > 0) 
            {
                cout << "El numero de la posicion " << (i + 1) << " es " << numeros[i] << " y es positivo.\n";
                ++positivos;
            } 
            else if (numeros[i] < 0) 
            {
                cout << "El numero de la posicion " << (i + 1) << " es " << numeros[i] << " y es negativo.\n";
                ++negativos;
            } 
            else 
            {
                cout << "El numero de la posicion " << (i + 1) << " es " << numeros[i] << " y es cero.\n";
            }
        }

        cout << "Cantidad de numeros positivos: " << positivos << "\n";
        cout << "Cantidad de numeros negativos: " << negativos << "\n";
    }

    return 0;
}
#include <iostream>
using namespace std;

int main() {
    
    int numeros[] = {84, 87, 78, 16, 94, 36, 87, 93, 50, 22};

    
    for (int i = 0; i < 10; ++i) {
        cout << "El numero de la posicion " << (i + 1) << " es " << numeros[i] << "\n" ;
    }

    return 0;
}
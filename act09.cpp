#include <iostream>
using namespace std;
int main(){
    int numeros;
    int repeticiones;
    cout << "ingrese el numero hasta el que desea parar el bucle :";
    cin >> repeticiones;

    for(numeros=0; numeros<=repeticiones; numeros+=5)
    {
        cout << "\n" << numeros;
    }
    return 0;

}

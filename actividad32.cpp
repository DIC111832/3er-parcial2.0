#include <iostream>
using namespace std;
int main (){
    
    int num[5];
    int numero;

    for(int i=1; i<6 ;++i)
    {
        cout << "digite un numero para la posicion " << i << ": ";
        cin >> numero;
        num[i]=numero;
    }

    for(int i=1; i<6 ;++i)
    {
        cout << "el dato de la posicion " << i<< " es " << num[i];
        cout << "\n";
    }
    return 0;
}
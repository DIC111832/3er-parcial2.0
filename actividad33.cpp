#include <iostream>
using namespace std;
int main (){
    int n;
    int o;

    cout << "digite el numero de posiciones :";
    cin >> n;
    int posicion[n];

    for (int i=0; i<n ;++i)
    {
        cout << "digite un numero para la posicion " << i << ": ";
        cin >> o;
        posicion[i]=o;
    }

    for(int i=0; i<n ; ++i)
    {
        cout << "el dato de la posicion " << i << " es " << posicion[i];
        cout << "\n";
    }
}
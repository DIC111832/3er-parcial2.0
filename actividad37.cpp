#include <iostream>
using namespace std;
int main (){
    int acum1=0;
    int acum2=0;
    int num;
    int t;

    cout << "digite el tamano de el vector 1: ";
    cin >> t;
    int vector1[t];

    for (int i=1; t>=i; ++i)
    {
        cout << " digite el numero "<< i << ": ";
        cin >> num;

        vector1[i]=num;
        acum1=acum1+vector1[i];
    }

    cout << "digite el tamano de el vector 2: ";
    cin >> t;

    int vector2[t];

    for (int i=1; t>=i; ++i)
    {
        cout << " digite el numero "<< i << ": ";
        cin >> num;

        vector2[i]=num;
        acum2=acum2+vector2[i];
    }

    int vector3[2];
    vector3[1]=acum1+acum2;

    cout << "la suma de los numeros de ambos vectores es de: "<< vector3[1];



}
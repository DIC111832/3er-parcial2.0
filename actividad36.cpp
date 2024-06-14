#include <iostream>
using namespace std;
int main () {
    int acum =0;
    int t,num;
    cout << "ingrese es tamano de el vector ";
    cin >> t;
    int vector[t];
    for (int i=1; t>=i; ++i)
    {
        cout << "digite un numero: ";
        cin >> num;
        vector[i]=num;
        acum=acum+vector[i];
    }
    for (int i=1; t>=i; ++i)
    {
        cout << "la suma de "<< vector[i]<< " mas ";
        
    }

    cout << "es: "<< acum;

    return 0;

}
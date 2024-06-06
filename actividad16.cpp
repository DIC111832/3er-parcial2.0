#include <iostream>
using namespace std;
int main (){
    int digitos[5];
    int i;
    int menor;
    
cout<<"Por favor, ingrese 5 dígitos uno por uno :\n";
    for (i = 0; i < 5; i++) {
        cout<<"Ingrese el digito "<< i + 1 << ": ";
        cin >> digitos[i];
    }
    
    menor = digitos[0];
    
    for (i = 1; i < 5; i++) {
        if (digitos[i] < menor) 
        {
            menor = digitos[i];
        }
    }
    cout <<"el menor de los numeros es \n"<<menor;
}
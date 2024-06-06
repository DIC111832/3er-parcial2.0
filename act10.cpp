#include <iostream>
using namespace std;
int main (){
    int numero;
    int suma = 0;

    cout <<"ingrese los numeros que desea para sumarlos, recuerde que el bucle termina hasta introducir un numero 0 :";
    cin >>numero;

    while (numero !=0)
    {
        suma += numero;

        cout <<"usted a ingresado el numero ";
        cout << numero;

        cout <<"\n ingrese otro numero :";
        cin >>numero;

    }
    cout <<"la suma total es "<<suma;
    cout <<"\n la secuencia a finalizado, se a intrroducido un numero 0 ";

    return 0;
}
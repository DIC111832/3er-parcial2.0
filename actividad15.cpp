#include <iostream>
using namespace std;
int main (){
    int edad,descuento1,descuento2;
    int boleto=70;
    cout << "introduzca su edad ";
    cin >> edad;
    if (edad>60)
    {
        //descuento del 55%
        descuento1=boleto-38;
        cout << "el total a pagar por su boleto es de " << descuento1;
    }
    if (edad<5)
    {
        //descuento del 60%
        descuento2=boleto-42;
        cout << "el total a pagar por su boleto es de " << descuento2;
    }
    else
    {
        cout << " el precio a pagar por su boleto es de 70";
    }
    return 0;
}
#include <iostream>
using namespace std;
int main (){
    int x,y,resultado;
    cout << "ingrese dos digitos :";
    cin >> x;
    cin >> y;
    resultado = x&y;
    if (resultado==0)
    {
        cout << "los numeros son divisibles "<< resultado;
    }
    else 
    {
        cout << "los numeros no son divisibles "<< resultado;
    }
}
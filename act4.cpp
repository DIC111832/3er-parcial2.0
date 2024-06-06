#include <iostream>
using namespace std;
int main (){
    char x;
    char a='a';
    char e='e';
    char i='i';
    char o='o';
    char u='u';

    cout << "ingrese un caracter ";
    cin >> x;
    if (x==a || x==e || x==i || x==o || x==u)
    {
        cout << "es una vocal ";
    }

    else 
    {
        cout << "no es una vocal ";
    }
    return  0;

}
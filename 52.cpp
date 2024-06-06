#include <iostream>
using namespace std;
int main (){
    int a,b,c;
    cout << "ingrese la contrasena";
    cin >> a;
    cin >> b;
    cin >> c;

    if (a==1 && b==2 && c==3)
    {
        cout << "contrasena correcta";
    }
    else 
    {
        cout << "contrasena incorrecta";
    }
    return 0;
    
}
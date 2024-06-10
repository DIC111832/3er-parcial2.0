#include <iostream>
using namespace std;
int main (){
    int x,y;
    cout << "ingrese dos numeros :";
    cin >> x;
    cin >> y;
    if (x>y || x<y)
    {
        if (x>y)
    {
        cout << x;
        cout << " es mayor que " << y ;
    }
    if (x<y)
    {
        cout << y ;
        cout << " es mayor que " << x;
        
    }

    }
    else 
    {
        cout << "ambos numeros son iguales ";
    }

    return 0;
}

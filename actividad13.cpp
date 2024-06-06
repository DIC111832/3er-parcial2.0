#include <iostream>
using namespace std;
int main (){
    int x,division,division2;
    cout << "ingrese un numero :";
    cin >> x;
    division=x%2;
    division2=x%3;

    if(division==0 || division2==0)
    {
        if (division==0 && division2==0)
        {
            cout << "el numero es par y divisible entre 3";
            
        }
        else if (division2==0)
        {
            cout << "el numero es divisible entre 3";
        }
        
        else
        {
            cout << "el numero es par";
        }
    }
    
    else 
    {
        cout << "el numero es impar";
    }
    return 0;
}


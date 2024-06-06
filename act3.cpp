#include <iostream>
using namespace std;
int main(){
    int n1,n2,n3;
    cout << "ingrese tres numeros por favor \n";

    cin >> n1;
    cin >> n2;
    cin >> n3;

    if (n1 >= n2 && n1 >= n3)
        {
        if (n2 >= n3) 
        {
            cout <<"Los numeros ordenados de menor a mayor son: \n"<< n3<< ", " << n2 << ", " << n1;
        } 
        else 
        {
            cout <<"Los numeros ordenados de menor a mayor son: \n"<< n2<< ", " << n3 << ", " << n1;
        }
        } 
        else if (n2 >= n1 && n2 >= n3)
        {
        if (n1 >= n3) 
        {
            cout <<"Los numeros ordenados de menor a mayor son: \n"<< n3 << ", " << n1 << ", " << n2;
        } 
        else 
        {
            cout <<"Los numeros ordenados de menor a mayor son: \n"<< n1 << ", " << n3 << ", " << n2;
        }
        } 
        else 
        {
        if (n1 >= n2) 
        {
            cout <<"Los numeros ordenados de menor a mayor son: \n"<< n2 << ", " << n1 << ", "<< n3;
        } 
        else 
        {
            cout <<"Los numeros ordenados de menor a mayor son: \n"<< n1 << ", " << n2 << ", " << n3;
        }
        
    }
    
}
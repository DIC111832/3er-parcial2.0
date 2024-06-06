#include <iostream>
using namespace std;
int main ()
{
    int n[10];
    int FN=0;
    int Mayor=0, Menor=0;
    for (int i = 0; i < 10; i++)
    {
        cout<<"Ingrese el digito "<<i+1<<"\n";
        cin>>n[i];
        FN=FN+n[i];
        if (Mayor<n[i])
        {
            Mayor=n[i];
        }
        if (Menor>n[i])
        {
            Menor=n[i];
        }
    }
    cout<<"La suma es de "<< FN <<"\n";
    cout<<"El mayor es: "<< Mayor <<"\n";
    cout<<"el menor es: "<< Menor;
    return 0;
}
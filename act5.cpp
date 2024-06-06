#include <iostream>
#define h 250
using namespace std;
int main (){
    int horast,salario,horasb,horasp,total;
    cout << "Hola, ingrese  las horas que a trabajado esta semana: ";
    cin >> horast;
    if(horast>40)
    {
        if(horast>50)
        {
            horasb=horast-40;
            horasp=horasb*2*h;
            salario=h*40;
            total=horasp+salario;
            cout << "el total a cobrar es de \n"<<total<< " pesos";
            
        }
        else
        {
        horasb=horast-40;
        horasp=horasb*1.5*h;
        salario=h*40;
        total=horasp+salario;
        cout <<"el total a cobrar es de \n"<<total << " pesos";
        }
    }
    else
    {
        salario=horast*h;
        cout <<"el total a cobrar es de \n"<<salario << " pesos";
    }
    return 0;
}
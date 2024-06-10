#include <iostream>
using namespace std;
int main (){
    int figura,area,base,basem,altura,l;

    cout << "ingrese el numero de la figura que desea calcular (triangulo=1)(rectangulo=2)(trapecio=3)(cuadrado=4) :";
    cin >>figura;
    switch(figura)
    {

        case 1:
        cout <<"ingrese el tamano de la base de el triangulo :";
        cin >>base;
        cout <<"ingrese la altura de el triangulo :";
        cin >>altura;
        area=(base*altura)/2;
        cout <<" el area de el triangulo es de :" << area;
        break;

        case 2:
        cout <<"ingrese el tamano de la base de el rectangulo :";
        cin >>base;
        cout <<"ingrese la altura de el rectangulo :";
        cin >>altura;
        area=base*altura;
        cout <<" el area de el triangulo es de :" << area;
        break;

        case 3:
        cout <<"ingrese el tamano de la base mayor de el trapecio :";
        cin >>base;
        cout <<"ingrese el tamano de la base menor de el trapecio :";
        cin >>basem;
        cout <<"ingrese la altura de el trapecio :";
        cin >>altura;
        area=((base+basem)/2)*altura;
        cout <<" el area de el trapecio es de :" << area;
        break;

        case 4:
        cout << "ingrese el lado de el cuadrado :";
        cin >> l;
        area=l*l;
        cout << "el area de el cuadrado es de :"<< area;
        break;

        default:
        {
            cout << "el numero ingresado no se relaciona con ninguna figura";
        }

        
    }
    return 0;
    

}

#include <iostream>
#include <string.h>
using namespace std;
int main (){
    char r;
    int u,p,total;
    char contra [20] ;
    char  usuario[20] ;
    int intentos = 3;
    
        cout << " \n Hola, ingrese su usuario :";
        cin >> usuario;
        

        cout <<"ingrese su contra :\n";
        cin >> contra;

        if (strcmp(contra, "DIC1118")==0 && strcmp(usuario, "Dicarlo"))
        {
            cout <<"Bienvenido al sistema ";
            cout << "ingrese las unidades vendidas de el dia de hoy :";
            cin >> u;
            cout << "introduzca el precio :";
            cin >> p;
            total=u*p;

            cout << "desea parar el bucle? ";
            cin >> r;





            
            
        }
        
        cout << "desea calcular los productoa de alguien mas?";
        

    return 0;

}
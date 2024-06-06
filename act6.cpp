#include <iostream>
using namespace std;
int main (){
    int numero;
    printf("ingrese un numero de una carta de la baraja espanola :");

    cin >> numero;

    switch(numero){
        case 1:
        cout <<"es un as";
        break;
        case 2:
        cout <<"no es una figura ni tampoco un as";
        break;
        case 3:
        cout <<"no es una figura ni tampoco un as";
        break;
        case 4:
        cout <<"no es una figura ni tampoco un as";
        break;
        case 5:
        cout <<"no es una figura ni tampoco un as";
        break;
        case 6:
        cout <<"no es una figura ni tampoco un as";
        break;
        case 7:
        cout <<"no es una figura ni tampoco un as";
        break;
        case 8:
        cout <<"no es una figura ni tampoco un as";
        break;
        case 9:
        cout <<"no es una figura ni tampoco un as";
        break;
        case 10:
        cout <<"es un sota";
        break;
        case 11:
        cout <<"es un caballo";
        break;
        case 12:
        cout <<"es un rey";
        break;
        default :
        cout <<"no es una carta de la baraja espanola";
        break;
    }
    return 0;
}
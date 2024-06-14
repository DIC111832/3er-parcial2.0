#include <iostream>
#include <cstdlib> 

using namespace std;

int main() {

    int matriz[3][3];


    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            matriz[i][j] = rand() % 10; 
        }
    }

    cout << "La matriz es:\n";
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
#include <iostream>

using namespace std;

int main(){

    int tabla[5][5];

    tabla[0][0] = 10;

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            tabla[i][j] = 10;
        }
    }

    int suma = 0;
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            suma += tabla[i][j];
        }
    }

    cout<<"La suma de todos los elementos de la matriz es: "<<suma<<endl;

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            cout<<tabla[i][j]<<" ";
        }
        cout<<endl;
    }

    suma = 0;
    for(int i = 0; i < 5; i++){
        suma += tabla[i][i];
    }
    cout<<"La suma de todos los elementos de la diagonal de la matriz es: "<<suma<<endl;

    return 0;
}
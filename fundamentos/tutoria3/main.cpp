#include <iostream>
#include <cmath>

using namespace std;

bool esPrimo(int n){
    if(n <= 1) return false;
    if(n <= 3) return true;
    if(n%2 == 0 || n%3 == 0) return false;

    int raiz = sqrt(n);
    for(int i = 5; i <= raiz; i++){
        if(n%i == 0) return false;
    }
    return true;
}

int sumaPrimosFibonnaci(int n){
    int actual = 1, anterior = 1, resultado = 0, aux = 0;

    if(n <= 2) return 0;

    for(int i = 3; i <= n; i++){
        aux = actual + anterior;
        anterior = actual;
        actual = aux;

        if(esPrimo(aux)) resultado += aux;
    }

    return resultado;
}

int cantidadDeDigitos(int n){
    int counter = 0;
    while(n > 0){
        n/=10;
        ++counter;
    }
    return counter;
}

int main(){

    int x = 3;
    int y = (x++) * 2;

    cout<<y;

    cout<<x;

    cout<<"\n"<<(--x * y) - (x % y) + (y++);

    cout<<"\nResultado suma primos fibonacci: "<<sumaPrimosFibonnaci(7);

    cout<<"\nLa cantidad de digitos de la contrasena es: "<<cantidadDeDigitos(123456);

    return 0;
}
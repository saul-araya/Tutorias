#include <iostream>

using namespace std;

int fibonnacci(int pos){
    if (pos <= 1) return 1;

    int primero = 1;
    int segundo = 1;

    for(int i = 1; i < pos; i++){
        int aux = segundo;
        segundo = primero + aux;
        primero = aux;
    }

    return segundo;
}

bool esCapicua(int n){

    int original = n;
    int invertido = 0;

    while (n > 0){
        invertido *= 10;
        invertido += n % 10;
        n = n/10;
    }

    return original == invertido;
}

int sumaBinario(int a, int b){
    int digitoA = 0;
    int digitoB = 0;
    int acarreo = 0;
    int resultado = 0;

    while(true){
        digitoA = a % 10;
        digitoA = b % 10;

        int aux = digitoA + digitoB;

        if(aux > 1){
            acarreo = 1;
            aux = 0;
        }

        resultado += aux;
        resultado *= 10;    //0

    }
}

int factorial(int n){
    int res = n;
    for(int i = n - 1 ; i > 0; i--){
        res *= i;
    }
    return res;
}

int sumaFactoriales(int nn){

    int respuesta = 0;
    for(int i = 1; i <= nn; i++){
        respuesta += factorial(i);
    }
    return respuesta;
}

int main(){

    /*int pos = 0;
    cout<<"Ingresa la posicion de la secuencia fibonnaci: "; cin>>pos;

    cout<<"Fibonnacci: "<<fibonnacci(pos)<<endl;*/

    /*int numero = 0;
    cout<<"Ingrese el numero: "; cin>>numero;

    if(esCapicua(numero)) cout<<"El numero si es capicua";
    else cout<<"El numero no es capicua";*/

    cout<<sumaFactoriales(5)<<endl;


    return 0;
}
#include <iostream>
#include <string>

using namespace std;

int pares(int n){
    int counter = 0;
    for(int i = 0; i <= n; i++){
        if(i%2 != 0){
            counter++;
        }
    }
    return counter;
}

int factorial(int n){
    for(int i = n - 1; i > 0; i--){
        n *= i;
    }
    return n;
}

void tablasMultiplicar(int n){
    for(int i = 0; i <= 10; i++){
        cout<<n<<" x " <<i<<" = "<<n*i<<endl;
    }
}

bool esCapicua(int n){
    int base = n;
    int aux = 0;
    while(n > 0){
        aux *= 10;
        aux += n % 10;
        n = n / 10;
    }
    return aux == base;
}

int main(){

    int n = 0;
    string palabra;

    cout<<"Ingrese un numero: ";
    cin>>n;

    cout<<"El numero de numeros pares que hay en el rango de 0 a "<<n<<" es: "<<pares(n)<<endl;
    cout<<"El factorial es: "<<factorial(n)<<endl;
    tablasMultiplicar(n);

    cin.ignore();
    getline(cin, palabra);

    cout<<palabra<<endl;

    if(esCapicua(n)) cout<<"Es capicua"<<endl; else cout<<"No es capicua"<<endl;

    return 0;
}
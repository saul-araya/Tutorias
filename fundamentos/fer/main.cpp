#include <iostream>

using namespace std;

class Numero{
private:
    int valor;

public:
    Numero(){
        this->valor = 0;
        }

    Numero(int n){
        this->valor = n;
    }

    ~Numero(){

    }

    int getValor(){
        return valor;
    }

    void setValor(int n){
        this->valor = n;
    }

    bool monotono(){
        int aux = valor, digito = aux % 10, extra = 0, actual = digito;
        aux /= 10;
        while(aux > 0){
            if(aux % 10 != digito) extra = aux % 10;
            if(extra != aux % 10 && actual != aux % 10) return false;
            aux/=10;
            digito = aux % 10;
        }
        return true;
    }

    bool monotonoEstricto(){
        int aux = valor, digito = aux % 10, extra = 0, actual = digito;
        aux /= 10;
        while(aux > 0){
            int mod = aux % 10;
            if(digito != mod) extra = mod;
            if(extra != mod && digito != actual) return false;
            aux/=10;
            digito = aux % 10;
        }
        return true;
    }

    Numero intercalar(Numero n2){
        int auxN1 = this->valor, auxN2 = n2.valor;
        int digitoN1 = 0;
        int digitoN2 = 0;
        int nuevoValor = 0;
        Numero n = Numero();
        while(auxN1 > 0 || auxN2 > 0){
            if(auxN1 > 0) digitoN1 = auxN1 % 10;
            if(auxN2 > 0) digitoN2 = auxN2 % 10;
            nuevoValor = nuevoValor * 10 + digitoN1;
            nuevoValor = nuevoValor * 10 + digitoN2;
            auxN1 /= 10;
            auxN2 /= 10;
        }

        int x = 0;
        while(nuevoValor > 0){
            x = x * 10 + nuevoValor % 10;
            n.setValor(x);
            nuevoValor /= 10;
        }

        return n;
    }



    /*
    
    n = 123

    y = 5557878

    z = 1525357878
    
    */

};

int main(){

    Numero n = Numero(5555);

    cout<<n.monotono()<<endl;

    Numero n2 = Numero(121212);

    cout<<n2.monotonoEstricto()<<endl;

    Numero n4 = Numero(123);
    Numero n5 = Numero(555);

    cout<<n4.intercalar(n5).getValor()<<endl;

    return 0;
}
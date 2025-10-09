#include <iostream>
#include <sstream>

using namespace std;

class ParOrdenado{
private:
    int n1;
    int n2;
public:
    ParOrdenado(){
        this->n1 = 0;
        this->n2 = 0;
    }
    ParOrdenado(int n1, int n2){
        this->n1 = n1;
        this->n2 = n2;
    }
    ~ParOrdenado(){}

    void copia(ParOrdenado p){
        this->n1 = p.getN1();
        this->n2 = p.getN2();
    }

    void intercambiar(ParOrdenado &p){
        int pN1 = p.getN1();
        int pN2 = p.getN2();

        p.setN1(this->n1);
        p.setN2(this->n2);

        this->n1 = pN1;
        this->n2 = pN2;
    }

    ParOrdenado sumatoria(ParOrdenado p){
        return ParOrdenado(this->n1 + p.getN1(), this->n2 + p.getN2());
    }

    bool compararObjetos(ParOrdenado p){
        if(this->n1 == p.getN1() && this->n2 == p.getN2()){
            return true;
        }
        return false;
    }

    int diferenciaN1(ParOrdenado p){
        return this->n1 - p.getN1();
    }

    int diferenciaN2(ParOrdenado p){
        return this->n2 - p.getN2();
    }

    ParOrdenado generarNuevo(ParOrdenado p){
        return ParOrdenado(diferenciaN1(p), diferenciaN2(p));
    }

    int getN1(){return this->n1;}
    int getN2(){return this->n2;}

    void setN1(int n){
        this->n1 = n;
    }
    void setN2(int n){
        this->n2 = n;
    }

    string toString(){
        stringstream s;
        s<<"N1: "<<this->n1<<endl;
        s<<"N2: "<<this->n2<<endl;
        return s.str();
    }
};

int main(){

    cout<<"-----------COPIANDO-------------\n\n";
    ParOrdenado p1 = ParOrdenado(10, 20);
    ParOrdenado p2 = ParOrdenado(30, 50);

    p1.copia(p2);

    cout<<"---------P1--------\n"<<p1.toString()<<endl<<"---------P2--------"<<endl<<p2.toString()<<endl;

    cout<<"\n-----------INTERCAMBIANDO-------------\n\n";

    p1 = ParOrdenado(10, 20);
    p2 = ParOrdenado(30, 50);

    p1.intercambiar(p2);

    cout<<"---------P1--------\n"<<p1.toString()<<endl<<"---------P2--------"<<endl<<p2.toString()<<endl;

    cout<<"\n-----------SUMATORIA-------------\n\n";

    cout<<p1.sumatoria(p2).toString()<<endl;

    cout<<"\n-----------Comparar objetos-------------\n\n";
    if(p1.compararObjetos(p2)){
        cout<<"Son iguales\n";
    }else{
        cout<<"No son iguales\n";
    }

    cout<<"\n-----------Diferencia n1-------------\n\n";
    cout<<"N1: "<<p1.diferenciaN1(p2)<<endl;
    
    cout<<"\n-----------Diferencia n2-------------\n\n";
    cout<<"N2: "<<p1.diferenciaN2(p2)<<endl;

    cout<<"\n-----------Generar nuevo-------------\n\n";
    cout<<p1.generarNuevo(p2).toString()<<endl;

    return 0;
}
#include "Ventas.h"

Ventas::Ventas(){
    this->can = new int(0);
    this->tam = new int(12);

    this->ventas = new double*[*tam];
    for(int i = 0; i < *tam; i++){
        ventas[i] = new double(0.0);
    }
}
Ventas::Ventas(int* n){
    this->can = new int(0);
    this->tam = new int(*n);

    this->ventas = new double*[*tam];
    for(int i = 0; i < *tam; i++){
        ventas[i] = new double(0.0);
    }
}
Ventas::~Ventas(){
    for(int i = 0; i < *tam; i++){
        delete ventas[i];
    }
    delete ventas;
}

int Ventas::getCantidad(){
    return *this->can;
}

void Ventas::agregarVenta(double* venta){
    if(*this->can < *this->tam){ 
        this->ventas[*this->can] = venta;
        *this->can = *this->can + 1;
    }
}

double Ventas::totalVentas(){
    double total = 0.0;
    if(!*this->can) return total;
    for(int i = 0; i < *this->can; i++){
        total += *this->ventas[i];
    }
    return total;
}

double Ventas::promedioVentas(){
    return this->totalVentas() / *this->can;
}

string Ventas::toString(){
    stringstream s;
    for(int i = 0; i < *can; i++){
        s<<"\tVenta del mes "<<i + 1<<":"<<*this->ventas[i]<<"\n";
    }
    return s.str();
}
#include "Banca.h"

Banca::Banca(){
    this->capital = new int(0);
}
Banca::Banca(int* capital){
    this->capital = capital;
}
Banca::~Banca(){
    delete this->capital;
}
int* Banca::getCapital(){return this->capital;}
void Banca::setCapital(int* capital){this->capital = capital;}
string Banca::toString(){
    stringstream s;
    s<<"El capital es: "<<*this->capital;
    return s.str();
}
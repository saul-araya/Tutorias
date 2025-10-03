#include "Carro.h"

Carro::Carro(string placa, int annio) : placa(placa), annio(annio){}
Carro::~Carro(){}

int Carro::getAnnio(){
    return this->annio;
}
string Carro::getPlaca(){
    return this->placa;
}

string Carro::toString(){
    stringstream s;
    s<<"Placa: "<<this->placa<<endl;
    s<<"Annio: "<<this->annio<<endl;
    return s.str();
}
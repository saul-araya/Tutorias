#include "Jugador.h"

Jugador::Jugador(){
    this->nombre = new string("");
    this->capital = new int(0);
}
Jugador::Jugador(string* nombre){
    this->nombre = nombre;
    this->capital = new int(0);
}
Jugador::~Jugador(){
    delete this->nombre;
    delete this->capital;
}

string* Jugador::getNombre(){
    return this->nombre;
}
int* Jugador::getCapital(){
    return this->capital;
}

void Jugador::setNombre(string* nombre){
    this->nombre = nombre;
}
void Jugador::setCapital(int* capital){
    this->capital = capital;
}

void Jugador::usarPerinola(Perinola* perinola){
    perinola->cambiarEstado();
}
string Jugador::toString(){
    stringstream s;
    s<<"El nombre del jugador es: "<<*this->nombre<<"\n";
    s<<"El capital del jugador es: "<<*this->capital<<"\n";
    return s.str();
}
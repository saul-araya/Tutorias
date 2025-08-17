#include "Perinola.h"

Perinola::Perinola(){
    this->estado = new int(0);
}
Perinola::Perinola(int* estado){
    this->estado = estado;
}
Perinola::~Perinola(){
    delete this->estado;
}

int* Perinola::getEstado(){
    return this->estado;
}
void Perinola::setEstado(int* estado){
    this->estado = estado;
}

void Perinola::cambiarEstado(){
    srand(time(0));
    *this->estado = rand() % 6 + 1;
}
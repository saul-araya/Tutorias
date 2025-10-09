#include "Nodo.h"

Nodo::Nodo() : valor(nullptr), siguiente(nullptr){}
Nodo::Nodo(Estudiante* p){
    this->siguiente = nullptr;
    this->valor = p;
}
Nodo::~Nodo(){
    delete valor;
    delete siguiente;
}

Estudiante* Nodo::getValor(){
    return this->valor;
}
Nodo* Nodo::getSiguiente(){
    return this->siguiente;
}

void Nodo::setSiguiente(Nodo* s){
    this->siguiente = s;
}

string Nodo::toString(){
    stringstream s;
    s<<"Valor del nodo: "<<endl<<this->valor->toString()<<endl;
    return s.str();
}
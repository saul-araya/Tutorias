#include "Nodo.h"

Nodo::Nodo(){
    this->valor = 0;
    this->siguiente = nullptr;
}
Nodo::Nodo(Empleado* valor){
    this->valor = valor;
    this->siguiente = nullptr;
}
Nodo::~Nodo(){
    delete siguiente;
}

Nodo* Nodo::getSiguiente(){
    return this->siguiente;
}
Empleado* Nodo::getValor(){
    return this->valor;
}

void Nodo::setSiguiente(Nodo* siguiente){
    this->siguiente = siguiente;
}
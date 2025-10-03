#include "Lista.h"

Lista::Lista(){
    this->ppio = nullptr;
    this->can = 0;
}

Lista::~Lista(){
}

Nodo* Lista::getPpio(){
    return this->ppio;
}

int Lista::getCantidad(){
    return this->can;
}

void Lista::agregarNodoInicio(Empleado* valor){
    Nodo* newNodo = new Nodo(valor);
    newNodo->setSiguiente(this->ppio);
    this->ppio = newNodo;
    this->can++;
}

void Lista::agregarNodoFinal(Empleado* valor){
    Nodo* newNodo = new Nodo(valor);
    if(this->ppio == nullptr){
        this->ppio = newNodo;
        this->can++;
        return;
    }


    Nodo* actual = ppio;
    while (actual->getSiguiente() != nullptr){
        if(actual->getValor()->getNombre() == valor->getNombre()){
            return;
        }
        actual = actual->getSiguiente();
    }
    actual->setSiguiente(newNodo);
    this->can++;
}

double Lista::promedioSalarios(){
    double suma = 0;
    Nodo* actual = ppio;
    while (actual != nullptr){
       suma += actual->getValor()->getSalario();
       actual = actual->getSiguiente(); 
    } 
    return suma / this->can;
}

Empleado* Lista::buscarPorNombre(string nombre){
    Nodo* actual = ppio;
    while (actual != nullptr){
        if(actual->getValor()->getNombre() == nombre){
            return actual->getValor();
        }
       actual = actual->getSiguiente(); 
    }
    return nullptr;

    /*for(Nodo* actual = ppio; actual != nullptr; actual = actual->getSiguiente()){
        if(actual->getValor()->getNombre() == nombre){
            return actual->getValor();
        }
    }
    return nullptr;*/
}

string Lista::toString(){
    stringstream s;
    Nodo* actual = ppio;
    while (actual != nullptr){
        s<<"---------Empleado--------"<<endl;
        s<<actual->getValor()->toString()<<endl;
        s<<"------------------------"<<endl;
        actual = actual->getSiguiente();
    }
    return s.str();
}
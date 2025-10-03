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

void Lista::agregarNodoFinal(Carro* valor){
    Nodo* newNodo = new Nodo(valor);
    if(this->ppio == nullptr){
        this->ppio = newNodo;
        this->can++;
        return;
    }

    Nodo* actual = ppio;
    while (actual->getSiguiente() != nullptr){
        if(actual->getValor()->getPlaca() == valor->getPlaca()){
            cout<<"Igual"<<endl;
            return;
        }
        actual = actual->getSiguiente();
    }
    actual->setSiguiente(newNodo);
    this->can++;
}

Carro* Lista::buscarPorPlaca(string placa){
    Nodo* actual = ppio;
    while (actual != nullptr){
        if(actual->getValor()->getPlaca() == placa){
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

Lista* Lista::carrosPorAnnio(int annio){
    Lista* newList = new Lista();
    Nodo* actual = ppio;
    while(actual != nullptr){
        if(actual->getValor()->getAnnio() == annio){
            newList->agregarNodoFinal(actual->getValor());
        }
        actual = actual->getSiguiente();
    }
    return newList;
}

Lista* Lista::coincidencias(Lista* listaB){
    Lista* resultado = new Lista();

    Nodo* actualB = listaB->getPpio();
    Nodo* actualA = this->ppio; //Este es el this (lista actual)

    while(actualA != NULL){
        while(actualB != NULL){
            if(actualA->getValor()->getPlaca() == actualB->getValor()->getPlaca()){
                resultado->agregarNodoFinal(actualA->getValor());
            }
            actualB = actualB->getSiguiente();
        }
        actualB = listaB->getPpio();
        actualA = actualA->getSiguiente();
    }

    return resultado;
}

Lista* Lista::diferencia(Lista* listaB){
    Lista* diferencia = new Lista();

    Nodo* actualA = ppio;
    Nodo* actualB = listaB->getPpio();

    while(actualA != NULL){
        while(actualB != NULL){
            if(!(actualA->getValor()->getPlaca() == actualB->getValor()->getPlaca())){
                diferencia->agregarNodoFinal(actualA->getValor());
            }
            actualB = actualB->getSiguiente();
        }
        actualB = listaB->getPpio();
        actualA = actualA->getSiguiente();
    }

    return diferencia;
}

void Lista::invertir(){
    Lista* invertida = new Lista();
    Nodo* actual = ppio;
    while(actual != NULL){
        
        actual = actual->getSiguiente();
    }
}

string Lista::toString(){
    stringstream s;
    Nodo* actual = ppio;
    while (actual != nullptr){
        s<<"---------Carro--------"<<endl;
        s<<actual->getValor()->toString()<<endl;
        s<<"------------------------"<<endl;
        actual = actual->getSiguiente();
    }
    return s.str();
}
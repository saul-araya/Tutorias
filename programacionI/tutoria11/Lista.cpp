#include "Lista.h"

Lista::Lista(): primero(nullptr), actual(nullptr){}
Lista::~Lista(){
}

Nodo* Lista::getPrimero(){
    return this->primero;
}
Nodo* Lista::getActual(){
    return this->actual;
}

void Lista::setPrimero(Nodo* primero){
    this->primero = primero;
}
void Lista::setActual(Nodo* actual){
    this->actual = actual;
}

bool Lista::buscarEstudiante(string id){
    actual = primero;
    while(actual != NULL){
        if(actual->getValor()->getID() == id) return true;
        actual = actual->getSiguiente();
    }
    return false;
}

void Lista::agregarNodoFinal(Estudiante* valor){
    if(primero == nullptr){
        primero = new Nodo(valor);
        return ;
    }
    if(buscarEstudiante(valor->getID())) return;
    actual = primero;
    while(actual->getSiguiente() != NULL){
        actual = actual->getSiguiente();
    }
    actual->setSiguiente(new Nodo(valor));
}

void Lista::copiaLista(Lista* l2){
    l2->setActual(l2->getPrimero());
    while(l2->getActual() != NULL){
        this->agregarNodoFinal(l2->getActual()->getValor());
        l2->setActual(l2->getActual()->getSiguiente());
    }
}

void Lista::eliminaNoActivos(){
    actual = primero;
    Nodo* anterior = actual;

    while(actual != NULL){
        if(!actual->getValor()->getActivo()){
            anterior->setSiguiente(actual->getSiguiente());
        }
        anterior = actual;
        actual = actual->getSiguiente();
    }
}

string Lista::toString(){
    stringstream s;
    actual = primero;
    while(actual != NULL){
        s<<actual->getValor()->toString()<<endl;
        actual = actual->getSiguiente();
    }
    return s.str();
}
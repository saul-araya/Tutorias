#include "Lista.h"

Lista::Lista(): head(nullptr){}
Lista::~Lista(){
    delete head;
}

Nodo* Lista::getHead(){
    return this->head;
}

void Lista::agregarNodoFinal(Producto* valor){
    Nodo* newNodo = new Nodo(valor);
    if(this->head == nullptr){
        this->head = newNodo;
        return;
    }

    Nodo* actual = head;
    while (actual->getSiguiente() != nullptr){
        actual = actual->getSiguiente();
    }
    actual->setSiguiente(newNodo);
}
    
bool Lista::compararaListas(Lista* l2){
    Nodo* actualCurrent = this->head;
    Nodo* actualL2 = l2->getHead();
    bool flag = false;

    while(actualCurrent != nullptr){
        while(actualL2 != nullptr){
            if(actualCurrent->getValor()->equals(actualL2->getValor())){
                flag = true;
                break;
            }
            actualL2 = actualL2->getSiguiente();
        }
        if(!flag) return false;
        flag = false;
        actualL2 = l2->getHead();
        actualCurrent = actualCurrent->getSiguiente();
    }
    return true;
}
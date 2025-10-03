#ifndef NODO_H
#define NODO_H

#include "Carro.h"

class Nodo{
private:
    Carro* valor;
    Nodo* siguiente;
public:
    Nodo();
    Nodo(Carro*);
    ~Nodo();

    Nodo* getSiguiente();
    Carro* getValor();

    void setSiguiente(Nodo*);
};

#endif
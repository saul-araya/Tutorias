#ifndef LISTA_H
#define LISTA_H

#include "Nodo.h"

class Lista{
private:
    Nodo* head;
public:
    Lista();
    ~Lista();

    Nodo* getHead();

    void agregarNodoFinal(Producto*);

    bool  compararaListas(Lista*);
};

#endif

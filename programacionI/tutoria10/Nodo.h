#ifndef NODO_H
#define NODO_H

#include "Producto.h"

class Nodo{
private:
    Producto* valor;
    Nodo* siguiente;
public:
    Nodo();
    Nodo(Producto*);
    ~Nodo();

    Producto* getValor();
    Nodo* getSiguiente();

    void setSiguiente(Nodo*);

    string toString();
};

#endif
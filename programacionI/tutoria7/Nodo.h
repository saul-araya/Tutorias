#ifndef NODO_H
#define NODO_H

#include "Empleado.h"

class Nodo{
private:
    Empleado* valor;
    Nodo* siguiente;
public:
    Nodo();
    Nodo(Empleado*);
    ~Nodo();

    Nodo* getSiguiente();
    Empleado* getValor();

    void setSiguiente(Nodo*);
};

#endif
#ifndef NODO_H
#define NODO_H

#include "Estudiante.h"

class Nodo{
private:
    Estudiante* valor;
    Nodo* siguiente;
public:
    Nodo();
    Nodo(Estudiante*);
    ~Nodo();

    Estudiante* getValor();
    Nodo* getSiguiente();

    void setSiguiente(Nodo*);

    string toString();
};

#endif
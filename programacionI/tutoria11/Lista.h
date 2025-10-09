#ifndef LISTA_H
#define LISTA_H

#include "Nodo.h"

class Lista{
private:
    Nodo* primero;
    Nodo* actual;
public:
    Lista();
    ~Lista();

    Nodo* getPrimero();
    Nodo* getActual();

    void setPrimero(Nodo*);
    void setActual(Nodo*);

    void agregarNodoFinal(Estudiante*);

    bool buscarEstudiante(string id);

    void copiaLista(Lista* l2);

    void eliminaNoActivos();

    string toString();
};

#endif

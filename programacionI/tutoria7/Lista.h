#ifndef LISTA_H
#define LIST_H

#include "Nodo.h"
#include <iostream>
#include <sstream>

using namespace std;

class Lista{
private:
    Nodo* ppio;
    int can;
public:
    Lista();

    Nodo* getPpio();

    int getCantidad();

    void agregarNodoInicio(Empleado*);

    void agregarNodoFinal(Empleado*);

    double promedioSalarios();

    Empleado* buscarPorNombre(string);

    string toString();
};

#endif
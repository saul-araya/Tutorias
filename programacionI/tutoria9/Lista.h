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
    ~Lista();

    Nodo* getPpio();

    int getCantidad();

    void agregarNodoFinal(Carro*);

    Carro* buscarPorPlaca(string);

    Lista* carrosPorAnnio(int annio);

    Lista* coincidencias(Lista*);

    Lista* diferencia(Lista*);

    void invertir();

    string toString();
};

#endif
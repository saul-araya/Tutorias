#ifndef JUGADOR_H
#define JUGADOR_H

#include "Perinola.h"
#include <sstream>

class Jugador{
private:
    string* nombre;
    int* capital;
public:
    Jugador();
    Jugador(string*);
    ~Jugador();

    string* getNombre();
    int* getCapital();

    void setNombre(string*);
    void setCapital(int*);

    void usarPerinola(Perinola*);
    string toString();
};

#endif
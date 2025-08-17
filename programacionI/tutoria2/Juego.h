#ifndef JUEGO_H
#define JUEGO_H

#include "Jugador.h"
#include "Banca.h"
#include "Perinola.h"

class Juego{
private:
    Jugador* p1;
    Jugador* p2;
    Banca* ban;
    Perinola* peri;
public:
    Juego();
    Juego(Jugador*, Jugador*, Banca*, Perinola*);
    ~Juego();

    void jugar();
    void mostrarEstadoJuego();

    void resultadoAlJugar(Jugador*);
};

#endif
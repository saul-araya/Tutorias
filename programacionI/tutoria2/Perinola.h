#ifndef PERINOLA_H
#define PERINOLA_H

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class Perinola{
private:
    int* estado;
public:
    Perinola();
    Perinola(int*);
    ~Perinola();

    void cambiarEstado();

    int* getEstado();
    void setEstado(int*);
};

#endif
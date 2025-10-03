#ifndef CARRO_H
#define CARRO_H

#include <iostream>
#include <sstream>

using namespace std;

class Carro{
private:
    string placa;
    int annio;
public:
    Carro(string, int);
    ~Carro();

    int getAnnio();
    string getPlaca();

    string toString();
};

#endif

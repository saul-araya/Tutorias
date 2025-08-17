#ifndef BANCA_H
#define BANCA_H

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class Banca{
private:
    int* capital;
public:
    Banca();
    Banca(int*);
    ~Banca();

    int* getCapital();
    void setCapital(int*);
    string toString();
};

#endif
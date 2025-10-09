#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H

#include <iostream>
#include <sstream>

using namespace std;

class Estudiante{
private:
    string nombre;
    string id;
    int annioIngreso;
    bool activo;
public:
    Estudiante(string, string, int, bool);
    ~Estudiante();

    string getID();

    bool getActivo();

    string toString();
};

#endif
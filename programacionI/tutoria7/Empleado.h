#ifndef EMPLEADO_H
#define EMPLEADO_H

#include <iostream>
#include <sstream>

using namespace std;

class Empleado{
private:
    string nombre;
    double salario;
public:
    Empleado(string, double);
    ~Empleado();

    double getSalario();
    string getNombre();

    string toString();
};

#endif

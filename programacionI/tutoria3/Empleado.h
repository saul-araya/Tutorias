#ifndef EMPLEADO_H
#define EMPLEADO_H

#include "Ventas.cpp"

class Empleado{
private:
    string* id;
    string* nombre;
    int* calificacion;
    Ventas* ventas;
public:
    Empleado();
    Empleado(string*, string*, int*);
    ~Empleado();

    void registerVenta(double*);
    string getId();
    Ventas* getVentas();

    string toString();
};

#endif
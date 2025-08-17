#ifndef VENTAS_H
#define VENTAS_H

#include <iostream>
#include <sstream>

using namespace std;

class Ventas{
private:
    double** ventas;
    int* tam;
    int* can;
public:
    Ventas();
    Ventas(int*);
    ~Ventas();

    int getCantidad();
    void agregarVenta(double*);
    double totalVentas();
    double promedioVentas();
    string toString();
};

#endif
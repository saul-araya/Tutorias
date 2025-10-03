#ifndef PRODUCTO_H
#define PRODUCTO_H

#include <iostream>
#include <sstream>

using namespace std;

class Producto{
private:
    string nombre;
    double precio;
public:
    Producto(string, double);
    ~Producto();

    string getNombre();
    double getPrecio();

    bool equals(Producto*);
    string toString();
};

#endif
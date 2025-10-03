#ifndef CUENTA_H
#define CUENTA_H

#include "Cliente.h"

class Cuenta{
private:
    string numeroCuenta;
    double monto;
    Cliente cliente;
public:
    Cuenta();
    Cuenta(string, double, Cliente);
    ~Cuenta();

    string mostrarCuenta();
    void ingreso(double ingreso);
    bool retiro(double retiro);
};

#endif
#ifndef DEPARTAMENTO_H
#define DEPARTAMENTO_H

#include "Empleado.cpp"

class Departamento{
private:
    string* nombre;
    string* telefono;
    Empleado** empleados;
    int* tam;
    int* can;
public:
    Departamento();
    Departamento(string*, string*, int*);
    ~Departamento();

    bool insertarEmpleado(Empleado*);
    bool empleadoRepetido(string id);
    Empleado* buscarEmpleado(string id);
    Empleado* empleadoMejoresVentas();
    double ingresoDepartamento();
    bool insertarVentaAEmpleado(string id, double monto);
    double promedioVentasEmpleado(string id);
};

#endif
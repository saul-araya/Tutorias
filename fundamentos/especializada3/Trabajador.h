#ifndef TRABAJADOR_H
#define TRABAJADOR_H

#include <iostream>
#include <sstream>

using namespace std;

class Trabajador{
private:
    string nombre, cedula;
    float cantidadHoras;
    float precioPorHora;
    char categoria;
    float salarioBruto;
    float salarioNeto;
    int anniosServicio;
public:
    Trabajador();
    Trabajador(string, string, float, float, char, int);
    ~Trabajador();

    float getSalarioNeto();

    float montoPorHorasExtra(float, float);
    void determinarSalarioBruto();
    float determinarRebajos();
    float incentivosDelEmpleado();
    void calculoSalarioNeto();

    string toString();
};

#endif
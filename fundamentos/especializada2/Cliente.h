#ifndef CLIENTE_H
#define CLIENTE_H

#include <iostream>
#include <sstream>

using namespace std;

class Cliente{
private:
    string idCliente;
    string nombre;
    string domicilio;
    int edad;
public:
    Cliente();
    Cliente(string, string, string, int);
    ~Cliente();

    string getIdCliente();
    string getNombre();
    string getDomicilio();
    int getEdad();

    void setIdCliente(string);
    void setNombre(string);
    void setDomicilio(string);
    void setEdad(int);

    string mostrarDatos(); //toString();
};

#endif
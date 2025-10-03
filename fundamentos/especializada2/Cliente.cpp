#include "Cliente.h"

Cliente::Cliente(){
    this->nombre = "";
    this->idCliente = "";
    this->domicilio = "";
    this->edad= 0;
}

Cliente::Cliente(string idCliente, string nombre, string domicilio, int edad){
    this->nombre = nombre;
    this->idCliente = idCliente;
    this->domicilio = domicilio;
    this->edad = edad;
}

Cliente::~Cliente(){

}

string Cliente::getIdCliente(){
    return this->getIdCliente();
}

string Cliente::getDomicilio(){
    return this->domicilio;
}

string Cliente::getNombre(){
    return this->nombre;
}

int Cliente::getEdad(){
    return this->edad;
}

void Cliente::setIdCliente(string idCliente){
    this->idCliente = idCliente;
}

void Cliente::setNombre(string nombre){
    this->nombre = nombre;
}

void Cliente::setDomicilio(string domicilio){
    this->domicilio = domicilio;
}

void Cliente::setEdad(int edad){
    this->edad = edad;
}

string Cliente::mostrarDatos(){
    stringstream s;
    s<<"Id Cliente: "<<this->idCliente<<endl;
    s<<"Nombre: "<<this->nombre<<endl;
    s<<"Edad: "<<this->edad<<endl;
    s<<"Domicilio: "<<this->domicilio<<endl;
    return s.str();
}


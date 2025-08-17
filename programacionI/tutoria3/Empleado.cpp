#include "Empleado.h"

Empleado::Empleado(){
    this->id = new string("");
    this->nombre = new string("");
    this->calificacion = new int(0);
    this->ventas = new Ventas();
}

Empleado::Empleado(string* id, string* nombre, int* calificacion){
    this->id = new string(*id);
    this->nombre = new string(*nombre);
    this->calificacion = new int(*calificacion);
    this->ventas = new Ventas();
}

Empleado::~Empleado(){
    delete id;
    delete nombre;
    delete calificacion;
    delete ventas;
}

string Empleado::getId(){
    return *this->id;
}

void Empleado::registerVenta(double* venta){
    this->ventas->agregarVenta(venta);
}

Ventas* Empleado::getVentas(){
    return this->ventas;
}

string Empleado::toString(){
    stringstream s;
    s<<"Id del empleado: "<<*this->id<<"\n";
    s<<"Nombre del empleado: "<<*this->nombre<<"\n";
    s<<"Calificacion del empleado: "<<*this->calificacion<<"\n";
    s<<"Ventas del empleado: \n"<<this->ventas->toString()<<"\n";

    return s.str();
}
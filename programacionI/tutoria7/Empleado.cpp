#include "Empleado.h"

Empleado::Empleado(string nombre, double salario){
    this->nombre = nombre;
    this->salario = salario;
}
Empleado::~Empleado(){

}

double Empleado::getSalario(){
    return this->salario;
}
string Empleado::getNombre(){
    return this->nombre;
}

string Empleado::toString(){
    stringstream s;
    s<<"Nombre: "<<this->nombre<<endl;
    s<<"Salario: "<<this->salario<<endl;
    return s.str();
}
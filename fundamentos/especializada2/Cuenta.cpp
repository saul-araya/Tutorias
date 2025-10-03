#include "Cuenta.h"

Cuenta::Cuenta(){
    this->numeroCuenta = "";
    this->monto = 0.0;
    this->cliente = Cliente();
}
Cuenta::Cuenta(string numeroCuenta, double monto, Cliente c){
    this->numeroCuenta = numeroCuenta;
    this->monto = monto;
    this->cliente = c;
}
Cuenta::~Cuenta(){

}

string Cuenta::mostrarCuenta(){
    stringstream s;
    s<<"Numero de cuenta: "<<this->numeroCuenta<<endl;
    s<<"Monto: "<<this->monto<<endl;
    s<<"Cliente asociado: \n"<<this->cliente.mostrarDatos()<<endl;
    return s.str();
}
void Cuenta::ingreso(double ingreso){
    this->monto += ingreso;
}
bool Cuenta::retiro(double retiro){
    if(this->monto <= 0 || this->monto < retiro){
        return false;
    }
    this->monto -= retiro;
    return true;
}
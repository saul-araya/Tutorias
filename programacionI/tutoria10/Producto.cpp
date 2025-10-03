#include "Producto.h"

Producto::Producto(string nombre, double precio) : nombre(nombre), precio(precio){}
Producto::~Producto(){}

string Producto::getNombre(){
    return this->nombre;
}
double Producto::getPrecio(){
    return this->precio;
}

bool Producto::equals(Producto* p){
    if(!(this->nombre == p->getNombre() && this->precio == p->getPrecio())) return false;
    return true;
}

string Producto::toString(){
    stringstream s;
    s<<"Nombre: "<<this->nombre<<endl;
    s<<"Precio: "<<this->precio<<endl;
    return s.str();
}
#include "Estudiante.h"

Estudiante::Estudiante(string nombre, string id, int annioIngreso, bool activo){
    this->nombre = nombre;
    this->id = id;
    this->annioIngreso = annioIngreso;
    this->activo = activo;
}
Estudiante::~Estudiante(){

}

string Estudiante::getID(){return this->id;}

bool Estudiante::getActivo(){return this->activo;}

string Estudiante::toString(){
    stringstream s;
    s<<"Nombre: "<<this->nombre<<endl;
    s<<"Id: "<<this->id<<endl;
    s<<"Annio de ingreso: "<<this->annioIngreso<<endl;
    s<<"Es activo: "<<(this->activo ? "Si" : "No")<<endl;
    return s.str();
}
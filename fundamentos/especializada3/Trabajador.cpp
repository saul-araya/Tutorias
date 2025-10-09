#include "Trabajador.h"

Trabajador::Trabajador(){
    this->anniosServicio = 0;
    this->cantidadHoras = 0.0;
    this->categoria = 's';
    this->cedula = "";
    this->nombre = "";
    this->precioPorHora = 0.0;
    this->salarioBruto = 0.0;
    this->salarioNeto = 0.0;
}
Trabajador::Trabajador(string nombre, string cedula, float cantidadHoras, float precioHoras, char categoria, int annios){
    this->nombre = nombre;
    this->cedula = cedula;
    this->cantidadHoras = cantidadHoras;
    this->precioPorHora = precioHoras;
    this->categoria = categoria;
    this->anniosServicio = annios;
    this->salarioBruto = 0.0;
    this->salarioNeto = 0.0;
}
Trabajador::~Trabajador(){

}

float Trabajador::getSalarioNeto(){
    return this->salarioNeto;
}

float Trabajador::montoPorHorasExtra(float extras, float salarioSinExtras){
    return extras * (salarioSinExtras / 2);
}

void Trabajador::determinarSalarioBruto(){
    if(cantidadHoras <= 48){
        this->salarioBruto = this->cantidadHoras * this->precioPorHora;
    }else{
        float salaraioSinExtras = this->cantidadHoras * 48;
        this->salarioBruto = salaraioSinExtras + montoPorHorasExtra(this->cantidadHoras - 48, salaraioSinExtras);
    }
}

float Trabajador::determinarRebajos(){
    return this->salarioBruto * 0.08;
}

float Trabajador::incentivosDelEmpleado(){
    float incentivo = 0.0;
    switch (this->categoria)
    {
        case 'e': incentivo = salarioBruto * 0.05; break;
        case 'b': incentivo = salarioBruto * 0.03; break;
        case 'r': incentivo = salarioBruto * 0.01; break;
        default: break;
    }

    if(this->anniosServicio > 5) incentivo += 50000;
    if(this->anniosServicio > 10) incentivo += (this->anniosServicio - 10) * 0.03;

    return incentivo;
}

void Trabajador::calculoSalarioNeto(){
    determinarSalarioBruto();
    this->salarioNeto = this->salarioBruto - determinarRebajos() + incentivosDelEmpleado();
}

string Trabajador::toString(){
    stringstream s;
    s<<"Nombre: "<<this->nombre<<endl;
    s<<"Cedula: "<<this->cedula<<endl;
    s<<"Cantidad de horas trabajadas: "<<this->cantidadHoras<<endl;
    s<<"Precio por hora: "<<this->precioPorHora<<endl;
    s<<"Categoria: "<<this->categoria<<endl;
    s<<"Salario bruto: "<<this->salarioBruto<<endl;
    s<<"Salario neto: "<<this->salarioNeto<<endl;
    s<<"Annios de servicio: "<<this->anniosServicio<<endl;
    return s.str();
}
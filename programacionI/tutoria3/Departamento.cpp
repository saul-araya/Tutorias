#include "Departamento.h"

Departamento::Departamento(){
    this->nombre = new string("");
    this->telefono = new string("");
    this->can = new int(0);
    this->tam = new int(0);
    this->empleados = new Empleado*[*tam];

    for(int i = 0; i < *tam; i++){
        this->empleados[i] = new Empleado();
    }
}
Departamento::Departamento(string* nom, string* tel, int* tam){
    this->nombre = new string(*nom);
    this->telefono = new string(*tel);
    this->can = new int(0);
    this->tam = new int(*tam);
    this->empleados = new Empleado*[*this->tam];

    for(int i = 0; i < *this->tam; i++){
        this->empleados[i] = new Empleado();
    }
}
Departamento::~Departamento(){
    delete this->nombre;
    delete this->telefono;
    for(int i = 0; i < *this->tam; i++){
        delete this->empleados[i];
    }
    delete empleados;
    delete this->tam;
    delete this->can;
}

bool Departamento::insertarEmpleado(Empleado* emp){
    if(this->empleadoRepetido(emp->getId())) return false;

    if(*this->can < *this->tam){
        this->empleados[*this->can] = emp;
        *this->can = *this->can + 1;
        return true;
    }
    return false;
}

Empleado* Departamento::buscarEmpleado(string id){
    for(int i = 0; i < *this->can; i++){
        if(this->empleados[i]->getId() == id){
            return this->empleados[i];
        }
    }
    return nullptr;
}

Empleado* Departamento::empleadoMejoresVentas(){
    Empleado* emp = nullptr;
    double mejoresVentas = 0.0;
    for(int i = 0; i < *this->can; i++){
        double* totalVentas = new double(this->empleados[i]->getVentas()->totalVentas());
        if(*totalVentas > mejoresVentas){
            mejoresVentas = *totalVentas;
            emp = this->empleados[i];
        }
        delete totalVentas;
    }
    return emp;
}

bool Departamento::empleadoRepetido(string id){
    int apariciones = 0;
    for(int i = 0; i < *this->can; i++){
        if(this->empleados[i]->getId() == id) apariciones++;
        if(apariciones > 0) return true;
    }
    return false;
}

double Departamento::ingresoDepartamento(){
    double total = 0.0;
    for(int i = 0; i < *this->can; i++){
        total += this->empleados[i]->getVentas()->totalVentas();
    }
    return total;
}

bool Departamento::insertarVentaAEmpleado(string id, double monto){

    Empleado* emp = this->buscarEmpleado(id);
    if(emp != nullptr){
        emp->registerVenta(new double(monto));
        return true;
    }
    return false;
}

double Departamento::promedioVentasEmpleado(string id){
    Empleado* emp = this->buscarEmpleado(id);
    if(emp != nullptr) return emp->getVentas()->promedioVentas();
    return 0.0;
}
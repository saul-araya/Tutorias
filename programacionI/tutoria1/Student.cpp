#include "Student.h"

/*
    Implementación del constructor sin parametros de la clase Student, pero al ella estar heredando de de Person,
    debemos de llamar al constructor de la clase Padre. Sintaxis:

        Student::Student() : Person()
*/
Student::Student() : Person(){
    this->profesion = "";
    this->pga = 0.0;
}

/*
    Implementación del constructor con parametros de la clase Student, pero al ella estar heredando de de Person,
    debemos de llamar al constructor por parametros de la clase Person y le pasamos los valores que el constructor espera. Sintaxis:

        Student::Student(string id, string name, int age, string profesion, float pga) : Person(id, name, age)
    
    Aquí, los valores de id, name y age, son los valores que les vamos a poner a los atributos de la clase Person, entonces son los que
    les pasamos al constructor de esa clase cuando lo llamamos
*/
Student::Student(string id, string name, int age, string profesion, float pga) : Person(id, name, age){
    this->profesion = profesion;
    this->pga = pga;
}

/*
    Desctructor de clase Student
*/
Student::~Student(){

}

//Implementación de los getters
string Student::getProfesion(){
    return this->profesion;
}
float Student::getPGA(){
    return this->pga;
}

//Implementación de los setters
void Student::setProfesion(string profesion){
    this->profesion = profesion;
}
void Student::setPGA(float pga){
    this->pga = pga;
}

//Acá hacemos la "sobreescritura" de los metodos que eran herededos de la clase Person, osea, les cambiamos su logica y la adaptamos a la necesidad de la clase.
void Student::walk(){
    cout<<"El estudiante esta caminando por la Universidad!!!"<<endl;
}
void Student::eat(){
    cout<<"El estudiante esta comiendo en la soda!!!"<<endl;
}
string Student::toString(){
    stringstream s;
    s<<"Nombre: "<<this->name<<endl;
    s<<"Profesion: "<<this->profesion<<endl;
    //Ponemos el resto de valores que queremos mostrar....
    return s.str();
}
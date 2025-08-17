#include "Person.h"

//Implementación constructor por default
Person::Person(){
    this->id = "";
    this->name = "";
    this->age = 0;
}
//Implementación constructor parametrizado
Person::Person(string id, string name, int age){
    this->id = id;
    this->name = name;
    this->age = age;
}
//Implementación destructor
Person::~Person(){
    
}

//Implementación getters
string Person::getId(){return this->id;}
string Person::getName(){return this->name;}
int Person::getAge(){return this->age;}

//Implementación setters
void Person::setId(string id){
    this->id = id;
}
void Person::setName(string name){
    this->name = name;
}
void Person::setAge(int age){
    this->age = age;
}

//Implementación "genérica" para los metodos que vamos a sobreescribir en las clases hijas
void Person::walk(){
    cout<<"Walk method, generic implementation!!!"<<endl;
}
void Person::eat(){
    cout<<"Eat method, generic implementation!!!"<<endl;
}
string Person::toString(){
    return "toString method, generic implementation!!!";
}
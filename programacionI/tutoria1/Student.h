/*
    @autor Saul Araya
    @file Person.h
    @date 31/07/2025
*/

#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"

/*
    @brief Clase hija Student que hereda atributos y metodos de su clase padre Person

    sintaxis de la herencia:
    
        class "Child_ClassName" : public "Father_ClassName"

    Acá estamos heredando tanto los metodos públicos como los atributos que pusimos en protected en la clase Person
*/
class Student : public Person{

//Atributos propios y privados de la clase Student
//private -> encapsulamiento
private:
    string profesion;
    float pga;

//Metodos públicos de la clase Student
public:
    Student();
    Student(string, string, int, string, float);
    ~Student();

    //Getters
    string getProfesion();
    float getPGA();

    //Setters
    void setProfesion(string);
    void setPGA(float);

    //Metodos heredados de la clase Person, los cuales vamos a sobreescribir.
    void walk();
    void eat();
    string toString();
};

#endif
/*
    @autor Saul Araya
    @file Person.h
    @date 31/07/2025
*/
#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <sstream>

using namespace std;

/*
    @brief Clase padre Persona la cual representa la abstracción de caracteristicas (atributos) compartidos
    entre sus dos clases hijas.
*/
class Person {

//Usamos protected porque estos atributos queremos que esten protegidos(sean privados) fuera de esta clase Person y de sus clases hijas.
//Encapsulamiento (un poco mas "relajada" con protected)
protected:
    string id;
    string name;
    int age;

//Usamos ublic porque queremos que todos estos metodos puedar ser utilizados fuera de la clase Person y sus clases hijas.
public:
   Person();
   Person(string id, string name, int age);
   ~Person();

   //Getters
   string getId();
   string getName();
   int getAge();

   //Setters
   void setId(string);
   void setName(string);
   void setAge(int);

   //Metodos virtual para habilitar el poliformismo y poder sobreescribir la funcionalidad de los metodos en cada una de las clases hijas.
   virtual void walk();
   virtual void eat();
   virtual string toString();
};

#endif
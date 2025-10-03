#include "Person.h"

Person::Person() : name(""), id(""), age(0){}

Person::Person(string name, string id, int age) : name(name), id(id), age(age) {}

string Person::getName(){return this->name;}
//Other sethers and getters.....


//No implementation of "virtual puro"
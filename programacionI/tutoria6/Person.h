#ifndef PERSON_H
#define PERSON_H

#include <iostream>

using namespace std;

class Person{
protected:
    string id;
    string name;
    int age;
public:
    Person();
    Person(string, string, int);

    string getName();
    //.....

    virtual string toString() = 0;
};

#endif
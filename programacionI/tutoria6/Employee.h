#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include "Person.h"
#include <sstream>

class Employee : public Person{
private:
    string employeeNumber;
    string department;
public:
    Employee();
    Employee(string, string, int, string, string);

    //getters and setters

    string toString(); //Override toString method from abstract class Person
};

#endif
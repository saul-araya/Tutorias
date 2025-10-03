#include "Employee.h"

Employee::Employee() : employeeNumber(""), department(""), Person(){}

Employee::Employee(string name, string id, int age, string employeeNumber, string department) :
Person(name, id, age), employeeNumber(employeeNumber), department(department){}

string Employee::toString(){
    stringstream s;

    s<<"Employee name: "<<this->name<<"\n";
    s<<"Employee lega ID: "<<this->id<<"\n";
    s<<"Employee age: "<<this->age<<"\n";
    s<<"Employee number: "<<this->employeeNumber<<"\n";
    s<<"Employee department: "<<this->department<<"\n";

    return s.str();
}
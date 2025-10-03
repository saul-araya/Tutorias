#include "Client.h"

Client::Client() : location(""), Person(){}

Client::Client(string name, string id, int age, string location) : Person(name, id, age), location(location){}

string Client::toString(){
    stringstream s;
    s<<"Client name: "<<this->name<<"\n";
    s<<"Client ID: "<<this->id<<"\n";
    s<<"Client age: "<<this->age<<"\n";
    s<<"Client location: "<<this->location<<"\n";

    return s.str();
}
#ifndef CLIENT_H
#define CLIENT_H

#include "Person.h"
#include <sstream>

class Client : public Person{
private:
    string location;
public:
    Client();
    Client(string, string, int, string);

    //setters and getters

    string toString();
};

#endif
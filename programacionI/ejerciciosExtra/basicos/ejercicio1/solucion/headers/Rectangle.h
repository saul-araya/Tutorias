#ifndef RECTANGULO_H
#define RECTANGULO_H

#include <iostream>

using namespace std;

class Rectangle{
private:
    double base;
    double height;
public:
    Rectangle();
    Rectangle(double, double);
    ~Rectangle();

    double getBase();
    double getHeight();

    void setBase(double);
    void setHeight(double);

    double getArea();
    double getPerimeter();
};

#endif
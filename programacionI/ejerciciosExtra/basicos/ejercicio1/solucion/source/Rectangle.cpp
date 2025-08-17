#include "../headers/Rectangle.h"

Rectangle::Rectangle() : base(0.0), height(0.0) {}

Rectangle::Rectangle(double base , double height) : base(base), height(height){}

Rectangle::~Rectangle(){}

double Rectangle::getBase() {return this->base;}

double Rectangle::getHeight(){return this->height;}

void Rectangle::setBase(double base){
    this->base = base;
}

void Rectangle::setHeight(double height){
    this->height = height;
}

double Rectangle::getArea(){
    return base * height;
}

double Rectangle::getPerimeter(){
    return 2 * (base + height);
}
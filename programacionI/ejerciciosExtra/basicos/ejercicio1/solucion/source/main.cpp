#include "Rectangle.cpp"

int main(){

    Rectangle rec = Rectangle(5, 10); //Burn data to make tests

    cout<<"Area of the rectangle is: "<<rec.getArea()<<"\n";

    cout<<"Perimeter of the rectabgle is: "<<rec.getPerimeter()<<"\n";

    return 0;
}
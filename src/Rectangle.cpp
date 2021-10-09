#include<iostream>
#include "Rectangle.h"

Rectangle::Rectangle(string name) : Shape_2D(name)
{
    length = 5;
    width = 7;
    //ctor
}
Rectangle::Rectangle(string name,double length,double width) : Shape_2D(name)
{
    this->length = length;
    this->width = width;
}
void Rectangle::info()
{
    cout<<"I am a Rectangle " << get_name() << "of length :" << length <<", and width :"<< width<< endl;
    Shape_2D::info();
    cout<<"My Surface Area is:" << calculate_area() << "square units "<<endl;

}
void Rectangle::draw()
{
    cout<<"Drawing Rectangle " << this->get_name() << endl;
}

double Rectangle::calculate_area()
{
    return (length*width);
}
Rectangle::~Rectangle()
{
    //dtor
}

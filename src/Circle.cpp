#include<iostream>
#include "Circle.h"

Circle::Circle(string name) : Shape_2D(name)
{
    radius = 3.0; // giving default value to radius

}
Circle::Circle(string name, double radius) : Shape_2D(name)
{
    this->radius = radius; //assigning constructor radius to data member
}


Circle::~Circle()
{
    //dtor
}


void Circle::draw()
{
    cout<<"Drawing Circle " << this->get_name() << endl;
}
void Circle::info()
{
    cout<<"I am a circle " << this->get_name() << "of radius :" << this->radius << endl;
    Shape_2D::info();
    cout<<"My Surface Area is:" << this->calculate_area() << "square units " << endl;

}

double Circle::calculate_area()
{
    return (3.142*(this->radius*this->radius));
}

#include<iostream>
#include "Square.h"

Square::Square(string name): Shape_2D(name)
{
    //ctor
    side = 4;
}

Square::Square(string name, double side) : Shape_2D(name)
{
    this->side = side;
}

void Square::draw()
{
     cout<<"Drawing Square " << this->get_name() << endl;

}
void Square::info()
{
    cout<<"I am a square " << this->get_name() << "of side :" << this->side<< endl;
    Shape_2D::info();
    cout<<"My Surface Area is:" << this->calculate_area() << " square units" <<endl;

}

double Square::calculate_area()
{
    return (side*side);
}
Square::~Square()
{
    //dtor
}

#include "Cube.h"
#include<iostream>


using namespace std;

Cube::Cube(string name) : Shape_3D(name)
{
    //ctor
    side =4;
}
Cube::Cube(string name, double side) : Shape_3D(name)
{
    this->side = side;
}

void Cube::draw()
{
    cout<<"Drawing Cube " << this->get_name() << endl;

}
void Cube::info()
{
    cout<<"I am a cube " << this->get_name() << "of side :" << this->side << endl;
    Shape_3D::info();
    cout<<"My Surface Area is:" << this->calculate_volume() << "square units " <<endl;

}

double Cube::calculate_volume()
{
    return (side*side*side);
}
Cube::~Cube()
{
    //dtor
}

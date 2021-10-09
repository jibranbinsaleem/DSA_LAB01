#include "Sphere.h"
#include<iostream>

using namespace std;
Sphere::Sphere(string name) : Shape_3D(name)
{
    //ctor
    radius = 4;
}
Sphere::Sphere(string name, double radius) : Shape_3D(name)
{
    this->radius = radius;
}


void Sphere::draw()
{
    cout<<"Drawing Sphere " << this->get_name() << endl;
}
void Sphere::info()
{
    cout<<"I am a Sphere " << this->get_name() << "of Sphere :" << this->radius << endl;
    Shape_3D::info();
    cout<<"My Volume is:" << this->calculate_volume() << " cubic units" << endl;

}

double Sphere::calculate_volume()
{
    return (radius*radius*radius);
}

Sphere::~Sphere()
{
    //dtor
}

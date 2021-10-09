#include "Shape_3D.h"
#include<iostream>
Shape_3D::Shape_3D(string name) : Shape(name)
{


    //ctor
}

Shape_3D::~Shape_3D()
{
    //dtor
}

void Shape_3D::info()
{
    cout<< "I am a 3D shape"<< endl;
}

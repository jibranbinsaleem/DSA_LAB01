#include<iostream>
#include "Shape_2D.h"

Shape_2D::Shape_2D(string name) : Shape(name)
{
    //ctor
}

Shape_2D::~Shape_2D()
{
    //dtor
}

void Shape_2D::info()
{
    cout<< "I am a 2D shape"<< endl;
}

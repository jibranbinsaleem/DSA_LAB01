#ifndef SHAPE_2D_H
#define SHAPE_2D_H

#include <Shape.h>


class Shape_2D : public Shape
{
    public:
        Shape_2D(string name);
        virtual ~Shape_2D();
        virtual void info();
        virtual double calculate_area() = 0;

    protected:

    private:
};

#endif // SHAPE_2D_H

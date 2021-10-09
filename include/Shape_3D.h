#ifndef SHAPE_3D_H
#define SHAPE_3D_H

#include <Shape.h>


class Shape_3D : public Shape
{
    public:
        Shape_3D(string name);
        virtual void info();
        virtual double calculate_volume() = 0;
        virtual ~Shape_3D();

    protected:

    private:
};

#endif // SHAPE_3D_H

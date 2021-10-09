#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <Shape_2D.h>


class Rectangle : public Shape_2D
{
    public:
        Rectangle(string name);
        Rectangle(string name,double length,double width);
        virtual void draw();
        virtual void info();
        virtual double calculate_area();
        virtual ~Rectangle();

    protected:

    private:
        double length;
        double width;
};

#endif // RECTANGLE_H

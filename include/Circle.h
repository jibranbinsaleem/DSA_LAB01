#ifndef CIRCLE_H
#define CIRCLE_H

#include <Shape_2D.h>


class Circle : public Shape_2D
{
    public:
        Circle(string name);
        Circle(string name, double radius);
        virtual void draw();
        virtual void info();
        virtual double calculate_area();
        virtual ~Circle();

    protected:

    private:
        double radius;
};

#endif // CIRCLE_H

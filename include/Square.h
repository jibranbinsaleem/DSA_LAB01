#ifndef SQUARE_H
#define SQUARE_H

#include <Shape_2D.h>
using namespace std;


class Square : public Shape_2D
{
    public:
        Square(string name);
        Square(string name, double side);
        virtual void draw();
        virtual void info();
        virtual double calculate_area();

        virtual ~Square();


        double side;

    protected:

    private:
};

#endif // SQUARE_H

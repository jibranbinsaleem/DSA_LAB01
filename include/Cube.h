#ifndef CUBE_H
#define CUBE_H

#include <Shape_3D.h>

class Cube : public Shape_3D
{
    public:
        Cube(string name);
        Cube(string name, double side);
        virtual void draw();
        virtual void info();
        virtual double calculate_volume();
        virtual ~Cube();

    protected:

    private:
        double side;
};

#endif // CUBE_H

#ifndef SPHERE_H
#define SPHERE_H

#include <Shape_3D.h>


class Sphere : public Shape_3D
{
    public:
        Sphere(string name);
        Sphere(string name, double radius);
        virtual void draw();
        virtual void info();
        virtual double calculate_volume();
        virtual ~Sphere();

    protected:

    private:
        double radius;
};

#endif // SPHERE_H

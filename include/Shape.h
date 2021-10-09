#ifndef SHAPE_H
#define SHAPE_H

#include<string>
using namespace std;
class Shape
{
    public:
        Shape(string name);
        virtual ~Shape();

        string get_name() { return name; }

        virtual void draw() = 0;
        virtual void info() = 0;

    protected:

    private:
        string name;
};

#endif // SHAPE_H

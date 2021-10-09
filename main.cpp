#include <iostream>

#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Square.h"
#include "Sphere.h"
#include "Cube.h"

using namespace std;

int main()
{
    // Creating an Object array based on Polymorphism access
    const int shape_count = 10;
    Shape *shapes[shape_count];
    shapes[0] = new Circle("Circle 1", 5.0);
    shapes[1] = new Square("Square 1", 4.0);
    shapes[2] = new Rectangle("Rectangle 1", 6.0,4.0);
    shapes[3] = new Cube("Cube 1", 3.0);
    shapes[4] = new Sphere("Sphere 1", 2.0);
    shapes[5] = new Circle("Circle 2", 6.0);
    shapes[6] = new Square("Square 2", 7.0);
    shapes[7] = new Rectangle("Rectangle 2", 5.0,7.0);
    shapes[8] = new Cube("Cube 2", 4.0);
    shapes[9] = new Sphere("Sphere 2", 9.0);
    //Loop to call draw() function for all 10 indexes of the array
    cout << "Drawing the Shapes" << endl;
    for(int i=0;i<10;i++)
        shapes[i]->draw();
    cout << endl;
    //Loop to call info() function for all 10 indexes of the array
    cout << "Getting the Shape Info" << endl;
    for(int i=0;i<10;i++)
    {
       shapes[i]->info();
    }
    cout << endl;
    return 0;
}

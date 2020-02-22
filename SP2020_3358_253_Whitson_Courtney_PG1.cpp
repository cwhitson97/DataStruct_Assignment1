/*
Author / s : Courtney Whitson
Serial Number / s : 31
Due Date : 02/05/2020
Programming Assignment Number 1
Spring 2020 - CS 3358 - 253

Instructor: Husain Gholoom.

The purpose of this program is to calculate the circumference, area,
and diameter of a circle given a default value or user input.
 */

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

class circleType
{
 public:

     circleType(double r = 0)       // Constructor w/ a default value of 0
     {
         radius = r;
     };

     void setRadius(double r);      // Sets the radius of a circle
     double getRadius();            // returns the radius of a circle
     double area();                 // Calculates the area of a circle
     double circumference();        // Calculates the circumference of a circle
     double diameter();             // Calculates the diameter of a circle
     void printResults();           // Prints the results

 private:
     double radius;
};

/*
    Sets the radius for a circle.

    double r: is a temp holder to collect the radius and store it
    back into the private variable radius.
*/
void circleType::setRadius(double r)
{
    cin >> r;

    if(r >= 0){
        radius = r;
    }else{
        radius = 0;
    }
}

/*
    Returns the radius of a circle
*/
double circleType::getRadius()
{
    return radius;
}

/*
    Calculates the area of a circle

    Returns the area
*/
double circleType::area()
{
    return M_PI * radius * radius;
}

/*
    Calculates the circumference of a circle

    Returns the circumference
*/
double circleType::circumference()
{
    return M_PI * 2 * radius;
}

/*
    Calculates the diameter of a circle

    Returns the diameter
*/
double circleType::diameter()
{
    return 2 * radius;
}

/*
    Prints to the screen the calculated results
*/
void circleType::printResults()
{
    cout << fixed << setprecision(2) << "Radius: " << radius << ", Area: "
    << area() << ", Circumference: " << circumference() << ", Diameter: "
    << diameter() << endl;
}

 int main(){

    circleType circle1(8);
    circleType circle2;
    double r;

    cout << "The purpose of this program is to implement the basic properties"
    << " of a circle.\n" << endl;

    cout << "Circle1 - ";
    circle1.printResults();
    cout << "Circle2 - ";
    circle2.printResults();

    cout << "\nEnter the radius of a circle: ";
    circle2.setRadius(r);
    cout << "After setting the radius.\n";
    circle2.printResults();

    cout << "\nImplemented by Courtney Whitson" << endl;
    cout << "\nFebruary 5th - 2020\n";

    return 0;
 }


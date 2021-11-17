#include "../include/Vector.h"
#include <cmath>
#include <iostream>

using namespace std;
Vector::Vector() : x(0), y(0){}
Vector::Vector(double x, double y) : x(x), y(y) {}

double Vector::length()
{
 return( sqrt(x*x+y*y));
}
void Vector ::print()
{
    cout << "wektor wyglada nastepujaco : ["<<this->x<<","<<this -> y <<"]" << endl;
}


Vector Vector::operator+(const Vector &rhs) const
{
    return {x + rhs.x, y + rhs.y};
}

Vector Vector::operator-(const Vector &rhs) const
{
    return {x - rhs.x, y - rhs.y};
}

Vector Vector::operator*(const Vector &rhs) const
{
    return{x*rhs.x, y*rhs.y};
}

Vector Vector::operator^(double scalar)
{
    return {scalar*x, scalar*y};
}

string Vector  :: operator <(const Vector &rhs)const
{
    if(x == rhs.x && y == rhs.y)
    {
        return ("Wektory sa rowne");
    }
    else
    {
        return ("Wektory nie sa rowne");
    }

}






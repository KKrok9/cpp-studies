#include <iostream>
#include "../include/Rectangle.h"

Prostokat::Prostokat(double a, double b)
{
   this->a = a;
   this->b = b;
}

double Prostokat::getArea()
{
 return (a*b);
}

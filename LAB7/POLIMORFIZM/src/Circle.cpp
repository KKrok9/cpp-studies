#include <iostream>
#include "../include/Circle.h"

using namespace std;

Okrag::Okrag(double r)
{
    this->r = r;
}

double Okrag::getArea()
{
    return (3.14*r*r);
}


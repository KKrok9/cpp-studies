#include <iostream>
#include "../include/Vector.h"

using namespace std;
//
// Created by Kacper on 16.11.2021.
//
double Vector::length(Vector &a, Vector &b)
{
    return sqrt(x * x + y * y);
}

Vector Vector::operator+(const Vector &rhs) const
{
    return {x + rhs.x, y + rhs.y};
}


Vector &operator+=(const Vector &rhs)
{
    this->x = this->x + rhs.x;
    this->y = this->y + rhs.y;
    return *this;
}

Vector Vector::&operator -=(const Vector &rhs)
{
    this->x = this ->x - rhs.x;
    this->y = this ->y - rhs.y;
    return *this;
}

Vector Vector::operator-(const Vector &rhs)const
{
    return {x-rhs.x, y-rhs.y};
}

Vector operator * (const Vector &rhs)const // iloczyn skalarny
{
    return {x*rhs.x, y*rhs.y};
}
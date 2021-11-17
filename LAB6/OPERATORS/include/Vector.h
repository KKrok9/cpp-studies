#ifndef MAIN_CPP_VECTOR_H
#define MAIN_CPP_VECTOR_H
#include <string>
#include <cmath>

using namespace std;

class Vector{
private:
   double x, y;

public:
    Vector();
    Vector(double x, double y);
    double length();
    void print();

    Vector operator+(const Vector &rhs) const;
    Vector operator-(const Vector &rhs) const;
    Vector operator*(const Vector &rhs) const;
    Vector operator^(double scalar) ;
    string operator < (const Vector &rhs) const;

};
#endif //MAIN_CPP_VECTOR_H

#ifndef MAIN_CPP_VECTOR_H
#define MAIN_CPP_VECTOR_H
#include <string>
using namespace std;

class Vector{
private:
    double x, y;

public:
    Vector();

    Vector(double x, double y);

    double length();
};

#endif //MAIN_CPP_VECTOR_H

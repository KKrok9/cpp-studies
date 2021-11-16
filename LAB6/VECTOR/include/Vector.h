#ifndef MAIN_CPP_VECTOR_H
#define MAIN_CPP_VECTOR_H
#include <string>

using namespace std;

class Vector {
private:
    double x, y;

public:
    Vector() {};

    Vector(double x, double y) : x(x), y(y) {}
    friend double length(Vector&, Vector&); // deklaracja przyjaźni
    friend double
};
#endif //MAIN_CPP_VECTOR_H

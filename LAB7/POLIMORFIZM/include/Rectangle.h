#ifndef MAIN_CPP_RECTANGLE_H
#define MAIN_CPP_RECTANGLE_H
#include "../include/Figure.h"

class Prostokat : public Figura
{
private:
    double a,b; // boki prostokata

public:
    Prostokat(double a, double b);
    double getArea() override;
};

#endif

#ifndef MAIN_CPP_CIRCLE_H
#define MAIN_CPP_CIRCLE_H
#include "../include/Figure.h"
class Okrag : public Figura // chodzi o klase Circle ale jak nadaję nazwę Circle to łączy się ona z klasą z poprzedniej części zadań :D
{
private:
    double r; // promien okregu

public:
    Okrag(double r);
    double getArea() override;
};

#endif

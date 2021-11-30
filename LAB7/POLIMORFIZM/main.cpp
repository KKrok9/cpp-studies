#include <iostream>
using namespace std;

class Figura
{
public:
    virtual double getArea() = 0; //Przypisujemy 0, aby nie było ciała metody
};

class Okrag
{
private:
    double r; // promien
};

int main()
        {
            Figura *fig = new Okrag();



            return 0;
        }


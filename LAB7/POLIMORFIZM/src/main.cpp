#include <iostream>
#include "../include/Figure.h"
#include "../include/Circle.h"
#include "../include/Rectangle.h"

using namespace std;
int main() {
    Figura *okrag = new Okrag(5);
    Figura *prostokat = new Prostokat(5, 18);

    cout << "Circle area: " << okrag->getArea() << endl;
    cout << "Rectangle area: " << prostokat->getArea() << endl;
}
#include <iostream>
#include "../include/Node.h"
using namespace std;

int main()
{
    Node a(3,6);
    Node b (2,10);
    cout << "Odleglosc miedzy punktami wynosi "<< pointsDistance(a,b);

    return 0;
}

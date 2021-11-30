#include <iostream>

using namespace std;
double a ; // bok kwadratu
double r; // promien okregu
double b,h; // podstawa i wysokosc trojkata

class Figure{

protected:
    string name, color;

};


class Square : public Figure{

public:
    void square_area()
    {
        cout << "Podaj bok kwadratu :"<< endl;
        cin >> a;
        cout << "Pole kwadratu wynosi : " << a*a << endl;
    }

};

class Triangle : public Figure{

public:
    void triangle_area()
    {
        cout << "Podaj podstawe trojkata :"<< endl;
        cin >> b;
        cout << "Podaj wysokosc trojkata :" << endl;
        cin >> h;
        cout << "Pole trojkata wynosi : " << b*h/2 << endl;
    }

};

class Circle : public Figure{
public:
    void circle_area()
    {
        cout << "Podaj promien okregu :"<<endl;
        cin >> r;
        cout << "Pole okregu wynosi : " << 3.14*r*r << endl;
    }
};


int main()
{
    Figure figura;
    Square kwadrat;
    Triangle trojkat;
    Circle okrag;

    kwadrat.square_area();
    trojkat.triangle_area();
    okrag.circle_area();

    return 0;
}

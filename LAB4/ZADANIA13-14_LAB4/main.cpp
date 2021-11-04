#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class Punkt
{
public:
    double wsp_xA ;
    double wsp_yA ;

    double wsp_xB ;
    double wsp_yB ;

    Punkt(double x1, double y1,double x2, double y2)
    {
        wsp_xA=x1;
        wsp_yA=y1;

        wsp_xB=x2;
        wsp_yB=y2;
    }

    void Obliczanie()
    {
        cout << "Odleglosc miedzy dwoma punktami A i B wynosi :" << sqrt(pow((wsp_xB-wsp_xA),2)+pow((wsp_yB-wsp_yA),2))<<endl;
    }

};
int main()
{
    Punkt Punkt1(5,10,20,30);
    Punkt1.Obliczanie();

    return 0;
}

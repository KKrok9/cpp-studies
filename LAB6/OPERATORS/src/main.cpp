#include <iostream>
#include <string>

#include "../include/Vector.h"
using namespace std;

int main()
{
    Vector v1(10,7);
    v1.print();
    Vector v2( 10,7);
    v2.print();

    Vector dodawanie = v1+v2;
    Vector odejmowanie = v1-v1;
    Vector mnozenie = v1*v1;
    Vector mnozeniePrzezSkalar = v1^3;
    string porownanie = v1.operator<(v2);

    // wypisywanie
    cout << "Wynik dodawania :"<<endl;
    dodawanie.print();

    cout << "Wynik odejmowania :"<<endl;
    odejmowanie.print();

    cout << "Wynik mnozenia :"<<endl;
    mnozenie.print();

    cout << "Wynik mnozenia przez skalar :"<<endl;
    mnozeniePrzezSkalar.print();

    cout << "Wynik porownania :" << endl;
    cout << porownanie << endl;


    return 0;

}
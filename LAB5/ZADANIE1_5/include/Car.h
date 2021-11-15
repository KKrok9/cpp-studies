#ifndef JIPP2_CAR_H
#define JIPP2_CAR_H
#include <string>
using namespace std;


class Car {
private:
    string rejestracja;
    string nazwa;
    int miejsca;
    string *tab;
    string marka;
    string typ;


public:
    Car(string rejestracja, string nazwa, int miejsca, string marka, string typ);
    Car(Car &car);
    void wyswietl();
    void setMarka(string marka);
    void setNazwa(string nazwa);
    void setRejestracja(string rejestracja);
    void setMiejsca(int miejsca);
    void setTyp(string typ);

};


#endif //JIPP2_CAR_H
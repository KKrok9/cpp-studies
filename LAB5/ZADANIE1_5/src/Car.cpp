#include <iostream>
#include <string>
#include "../include/Car.h"

using namespace std;

Car::Car (string rejestracja,string nazwa, int miejsca, string marka, string typ)
{
    this->rejestracja = rejestracja;
    this->nazwa = nazwa;
    this->miejsca = miejsca;
    this->tab = new string [miejsca];
    this->marka = marka;
    this->typ = typ;

}

Car::Car(Car &car)
{
    rejestracja = car.rejestracja;
    nazwa = car.nazwa;
    miejsca = car.miejsca;
    tab = new string[miejsca];
    marka = car.marka;
    typ = car.typ;
            for(int i = 0; i < miejsca; ++i)
            {
                tab[i] = car.tab[i];
            }

}

void Car::wyswietl()
{
    cout << "Samochod " << nazwa << " marki " << marka << "  o numerze rejestacyjnym " << rejestracja << " jest typem samochodu " << typ << " majacym  " << miejsca << " miejsca siedzace"<< endl;
}


void Car::setNazwa(string nazwa)
{
    this->nazwa = nazwa;
}
void Car::setRejestracja(string rejestracja)
{
    this->rejestracja=rejestracja;
}

void Car :: setMarka(string marka)
{
    this->marka = marka;
}
void Car :: setMiejsca(int miejsca)
{
    this -> miejsca = miejsca;
}
void Car :: setTyp(string typ)
{
    this -> typ = typ;
}
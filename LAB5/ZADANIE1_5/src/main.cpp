#include <iostream>
#include "../include/Car.h"


using namespace std;

int main() {

    Car c1("KN 420", "Corolla", 4, "Toyota", "Kombi");
    Car c2(c1);
    cout<<"Przed : " << endl;
    c2.wyswietl();
    cout<<"Po :\n";
    c2.setNazwa("Opel");
    c2.setRejestracja("KNT 200137");
    c2.setMarka("Corsa");
    c2.setMiejsca(5);
    c2.setTyp("Sedan");
    c2.wyswietl();

    cout << "Przed aktualizacja : "<< endl;
    c1.wypiszWersjeOprogramowania();
    Car::opublikujNowe(1);
    c1.zaktualizujWersjeOprogramowania();

    cout << "Po aktualizacji : "<< endl;
    c1.wypiszWersjeOprogramowania();

    return 0;
}
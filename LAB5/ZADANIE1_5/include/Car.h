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
    static int najnowszaWersjaOprogramowania;
    string zainstalowanaWersjaOprogramowania;

public:
    Car(string rejestracja, string nazwa, int miejsca, string marka, string typ);
    Car(Car &car);
    void wyswietl();
    void setMarka(string marka);
    string getMarka();
    void setNazwa(string nazwa);
    string getNazwa();
    void setRejestracja(string rejestracja);
    string getRejestracja();
    void setMiejsca(int miejsca);
    void setTyp(string typ);
    string getTyp();
    void wypiszWersjeOprogramowania();
    void zaktualizujWersjeOprogramowania();
    static void opublikujNowe(int nowaWersja);
};


#endif //JIPP2_CAR_H
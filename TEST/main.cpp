#include <iostream>
#include <string>
using namespace std;

class Event
{
private:
    int dzien,rok;
    string miesiac;
    string nazwa;

public:
    Event(int r, string m, int d, string n)
    {
        cout << "Wywolales konstruktor, przypisanie domyslnych wartosci :" << endl;
        rok = r;
        miesiac = m;
        dzien = d;
        nazwa = n;
    }
    void insert()
    {
        cout << "Podaj rok wydarzenia:" << endl;
        cin >> rok;
        cout << "Podaj miesiac wydarzenia:" << endl;
        cin >> miesiac;
        cout << "Podaj dzien wydarzenia:" << endl;
        cin >> dzien;
        cout << "Podaj nazwe wydarzenia :"<<endl;
        cin >> nazwa;
    }
    void show()
    {
        cout << endl << "Wydarzenie " <<nazwa<<" odbedzie sie w "<< rok << " roku dnia " << dzien << " " << miesiac << endl;

    }
    ~Event()
    {
        cout << "Wywolales destruktor wariacie, jaka paruwa?" << endl;
    }


};

int main()
{
    Event wydarzenie(1,"marzec",1,"wydarzenie");
    wydarzenie.show();

    return 0;
}
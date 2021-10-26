#include <iostream>
#include <string>

using namespace std;

struct samochod{
    string marka;
    string model;
    int rok_produkcji;
    string kolor;

};
int main() {

    samochod pojazd[3];
    for (int i = 0; i <= 3; i++) {
        cout << "PODAJ MARKE :" << endl;
        cin >> pojazd[i].marka;
        cout << "PODAJ MODEL :" << endl;
        cin >> pojazd[i].model;
        cout << "PODAJ ROK PRODUKCJI" << endl;
        cin >> pojazd[i].rok_produkcji;
        cout << "PODAJ KOLOR" << endl;
        cin >> pojazd[i].kolor;
    }
    return 0;
}
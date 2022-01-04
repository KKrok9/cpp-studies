#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    vector<string> imiona;
    vector<string> nazwiska;

    string imie;
    string nazwisko;

    for (int i = 0; i < 2; ++i) {
        imiona.push_back(""); // tworzenie miejsca dla elementu
        cout << "Podaj imie " << endl;
        cin >> imie; // pobieranie elementu
        imiona.at(i) = imie; // przypisanie wartosci w wektorze
    }



    for (int i = 0 ; i <2 ; i++)
    {
        cout << imiona.at(i) << endl;
    }

    // edycja imiona
   int numer;

    cout << "Ktore imie chcesz usunac"  ;
    cin >> numer;
    imiona.erase(imiona.begin() + numer-1);
    for (int i = 0 ; i <imiona.size() ; i++) {
        if (imiona.empty() == false) {
            cout << imiona.at(i) << endl;
        }
    }
    return 0;
}
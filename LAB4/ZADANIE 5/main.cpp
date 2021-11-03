#include <iostream>
#include <string>
using namespace std;

class Prostopadloscian
{
public:
    double bok_a = 10;
    double bok_b= 20;
    double bok_c = 30;
    void wyswietlanie()
    {
        cout <<"Objetosc prostopadloscianiu wynosi :"<< bok_a*bok_b*bok_c<<endl;
    }

};
//////////////////////
class Kula
{
public:
    double promien = 4.20;
    double Pi = 3.14;
    void wyswietlanie()
    {
        cout << "Objetosc kuli wynosi :"<< 4/3 * Pi * pow(promien,3) <<endl;
    }
};

///////////////////////
class Rownanie
{
public :
    double a ;
    double b;
    double c;
    void pobieranie()
    {
        cout <<"Podaj wspolczynniki"<<endl;
        cin >> a;
        cin >> b;
        cin >> c;
    }
    void wyswietlanie()
    {
        cout <<"Twoje rownanie kwadratowe ma postac :"<<"f(x) = "<< a<<"x^2 + " << b << "x + " << c <<endl;
    }
};
/////////////////////////
class Dane
{
public :
    string imie ;
    string nazwisko;
    int numer_albumu;
    double liczba_pytan;
    double poprawne_odpowiedzi;

    void uzupelnianie()
    {
        cout <<"Podaj Imie studenta:"<<endl;
        cin >> imie;
        cout <<"Podaj Nazwisko studenta:"<<endl;
        cin >> nazwisko;
        cout <<"Podaj numer albumu studenta:"<<endl;
        cin >> numer_albumu;
        cout <<"Podaj liczbe pytan:"<<endl;
        cin >> liczba_pytan;
        cout <<"Podaj ilosc poprwanych odpowiedzi:";
        cin >> poprawne_odpowiedzi;
    }
    void wyswietlanie()
    {
        cout << "Student " << imie << " " <<nazwisko << " uzyskal " << (poprawne_odpowiedzi/liczba_pytan) * 100 << " procent poprawnych odpowiedzi";
    }
};
////////////////////////////////////
int main()
{
    Prostopadloscian ObjetoscProstopadloscianiu;
    Kula ObjetoscKuli;
    Rownanie RownanieKwadratowe;
    Dane Student;

    ObjetoscProstopadloscianiu.wyswietlanie();

    ObjetoscKuli.wyswietlanie();

    RownanieKwadratowe.pobieranie();
    RownanieKwadratowe.wyswietlanie();

    Student.uzupelnianie();
    Student.wyswietlanie();
    return 0;
}

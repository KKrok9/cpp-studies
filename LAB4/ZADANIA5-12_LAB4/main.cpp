#include <iostream>
#include <string>
using namespace std;

class Prostopadloscian
{
private:
    double bok_a = 10;
    double bok_b= 20;
    double bok_c = 30;
public:
    void wyswietlanie()
    {
        cout <<"Objetosc prostopadloscianiu wynosi :"<< bok_a*bok_b*bok_c<<endl;
    }

};
//////////////////////
class Kula
{
private:
    double promien = 4.20;
    double Pi = 3.14;
public:
    void wyswietlanie()
    {
        cout << "Objetosc kuli wynosi :"<< 4/3 * Pi * pow(promien,3) <<endl;
    }
};

///////////////////////
class Rownanie
{
private:
    double a ;
    double b;
    double c;
public:
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
private:
    string imie ;
    string nazwisko;
    int numer_albumu;
    double liczba_pytan;
    double poprawne_odpowiedzi;
public:
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

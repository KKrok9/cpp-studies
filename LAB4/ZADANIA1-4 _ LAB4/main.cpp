#include <iostream>
#include <string>

using namespace std;
int ilosc = 4; // ilosc pojazdow

struct samochod{
    string marka;
    string model;
    int rok_produkcji;
    string kolor;
    int cena;

};
struct samochod pojazd[] = {
        {"Suzuki", "GrandVitara",2005, "zloty",13 },
        {"Toyota", "Corolla",2014, "czarny",30},
        {"Toyota", "Avensis", 2010, "granatowy",20},
        {"Mercedes", "G-Klasa", 2015, "bialy",500},

};

int najnowszy;
int najnowszyIndeks;

int iloscTejSamejMarki(samochod pojazd[], int ilosc)
{
    int iloscPojazdow = 1;
    string tab[4];
     tab[0] = pojazd[0].marka ;

    for(int i = 1; i<ilosc; i++)
    {
     if (pojazd[i].marka == pojazd[i-1].marka)
     {
         iloscPojazdow++;
     }
     else
     {
         tab[i] = pojazd[i].marka;
     }

    }
    return iloscPojazdow;
}

int sprawdzenieKtoryNajnowszy(samochod pojazd[], int ilosc) {
    int najnowszy = 2000;
    int najnowszyIndeks;
    for (int i = 0; i < ilosc; i++)
    {
        if(pojazd[i].rok_produkcji > najnowszy)
        {
            najnowszy = pojazd[i].rok_produkcji ;
            najnowszyIndeks = i;
        }
    }
return najnowszyIndeks;
}
int main() {


    cout << "\t\t\t\tDOSTEPNE POJAZDY :"<<endl;
    cout << "======================================================================================================"<<endl;
    cout << "||||||||| Marka ||||||||| Model ||||||||| Rok produkcji ||||||||| Kolor ||||||||| Cena (tys) |||||||||"<<endl;
    cout << "======================================================================================================"<<endl;
    for (int i = 0; i < ilosc; i++)
    {
        cout <<"|||||||  " << pojazd[i].marka <<" ||||||| " << pojazd[i].model<<"   |||||||    " << pojazd[i].rok_produkcji<<"   |||||||    " << pojazd[i].kolor<<"   |||||||  "<<pojazd[i].cena<<"   ||||||||"<<endl;
        cout << "=================================================================================================="<<endl;
    }
    cout << "U NASZEGO DEALERA ZNAJDUJA SIE "<< iloscTejSamejMarki(pojazd, ilosc)<<" SAMOCHODY TEJ SAMEJ MARKI"<<endl;
    cout << "Najmlodszym samochodem w naszej kolekcji jest samochod znajdujacy sie na pozycji :" << sprawdzenieKtoryNajnowszy(pojazd,ilosc)+1<<endl;
    r
    eturn 0;
}
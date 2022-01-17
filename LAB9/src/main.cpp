#include <iostream>
#include "vector"
#include "list"
#include "../include/ListaUtworow.h"
#include "../include/Utwor.h"


using namespace std;
int main() {

    cout<<"Zadanie 1: \n\n";
    string ciagZnakow = "przykladowy ciag znaku";
    cout<<"Stary ciag znakow: "<<ciagZnakow<<endl;
    for (auto i = ciagZnakow.begin(); i != ciagZnakow.end(); i++) {
        *i = toupper(*i);
    }
    cout<<"\nNowy ciag: "<<ciagZnakow;

    cout<<"Zadanie 2: \n\n";
    ListaUtworow listaUtworow("Moja lista");
    listaUtworow.dodajUtwor("Autor1", "Tytul1", 5);
    listaUtworow.dodajUtwor("Autor2", "Tytul2", 5);
    listaUtworow.dodajUtwor("Autor3", "Tytul3", 5);

    listaUtworow.odtwarzajUtwory();
    return 0;
}
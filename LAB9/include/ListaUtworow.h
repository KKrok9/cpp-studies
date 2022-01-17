//
// Created by Kacper on 17.01.2022.
//

#ifndef MAIN_CPP_LISTAUTWOROW_H
#define MAIN_CPP_LISTAUTWOROW_H
#include "Utwor.h"
#include "vector"

using namespace std;

class ListaUtworow {
private:
    vector<Utwor> listaUtworow;
    string nazwaListy;
public:
    ListaUtworow(string nazwaListy);
    void dodajUtwor(Utwor utwor);
    void dodajUtwor(string autor, string tytul, int dlugosc);
    void usunUtwor();
    void odtwarzajUtwory();

    [[noreturn]] void odtwarzajWPetli();
};


#endif //MAIN_CPP_LISTAUTWOROW_H

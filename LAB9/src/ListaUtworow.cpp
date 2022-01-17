//
// Created by Kacper on 17.01.2022.
//
#include "../include/ListaUtworow.h"
#include <iostream>
using namespace std;

ListaUtworow::ListaUtworow(string nazwaListy) {
    this->nazwaListy = nazwaListy;
}
void ListaUtworow::dodajUtwor(Utwor utwor) {
    listaUtworow.push_back(utwor);
}
void ListaUtworow::dodajUtwor(string autor, string tytul, int dlugosc) {
    listaUtworow.emplace_back(autor, tytul, dlugosc);
}
void ListaUtworow::usunUtwor() {
    if(listaUtworow.size() > 0) listaUtworow.pop_back();
}
void ListaUtworow::odtwarzajUtwory() {
    cout<<"--------------------------\nOdtwarzam liste: "<<nazwaListy<<endl;
    for (auto i = listaUtworow.begin(); i != listaUtworow.end(); i++) {
        i->odtworz();
    }
}
[[noreturn]] void ListaUtworow::odtwarzajWPetli() {
    while (true) {
        for (auto x = listaUtworow.begin(); x != listaUtworow.end(); x++) {
            x->odtworz();
        }
    }
}
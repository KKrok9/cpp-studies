//
// Created by Kacper on 17.01.2022.
//

#include "../include/Utwor.h"
#include "iostream"
#include "windows.h"

using namespace std;


#include "../include/Utwor.h"
#include "iostream"
#include "windows.h"

using namespace std;

Utwor::Utwor(string autor, string tytul, int dlugosc) {
    this->autor = autor;
    this->tytul = tytul;
    this->dlugosc = dlugosc;
}
void Utwor::odtworz() {
    cout<<"\nUtwor: "<<tytul<<"\nAutor: "<<autor<<endl;
    for(int i=0; i<dlugosc; i++)
    {
        cout<<"-";

    }
    cout<<"\n\nKoniec odtwarzania\n****************\n";
    Sleep(1000);
}
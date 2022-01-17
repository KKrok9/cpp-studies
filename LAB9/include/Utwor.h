//
// Created by Kacper on 17.01.2022.
//

#ifndef MAIN_CPP_UTWOR_H
#define MAIN_CPP_UTWOR_H
#include <string>

using namespace std;

class Utwor {
private:
    int dlugosc;
    string autor;
    string tytul;
public:
    Utwor(string autor, string tytul, int dlugosc);
    void odtworz();
};
#endif //MAIN_CPP_UTWOR_H

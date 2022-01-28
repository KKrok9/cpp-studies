#ifndef MAIN_CPP_TITLES_H
#define MAIN_CPP_TITLES_H
#include <iostream>
#include <string>
#include <vector>
#include "App.h"

using namespace std;

class Titles
{

private:
    string title; // tytul przepisu

public:
    vector <string> titles; // wektor tytulow
    void setTitle(string title); // ustaw tytul
    void showTitle(int przepis, vector <string>& titles); // pokaz jeden tytul
    void showTitles(); // pokaz wszystkie tytuly znajdujace sie w wektorze
    void editContent(int przepis); // edytuj tytul znajdujacy sie pod indeksem przepis
};
#endif //MAIN_CPP_TITLES_H

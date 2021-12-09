#include <iostream>
#include "../include/Note.h"
#include <string>
using namespace std;

void Note ::setTitle()
{
 cout << "Podaj tytul notatki :"<< endl;
 string tytul;
    getline(std::cin,tytul);
    this -> title = tytul;
}

string Note ::getTitle()
{
 return this -> title;
}

void Note ::setContent()
{

}

string Note ::getContent()
{
    return (" ");
}


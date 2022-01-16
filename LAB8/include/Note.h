#ifndef MAIN_CPP_NOTE_H
#define MAIN_CPP_NOTE_H
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Note{

protected:
    string title ; // tytuł notatki
    string content; // zawartość
public:

// tytuly
   string getTitle(string title); // zwraca tytul notatki
   string setTitle(string title); // ustawianie tytulu notatki
   /////////////////////////////////////////////
//tresc
    string getContent(string content);
    string setContent(string content);
////////////////////////////////////////////////
//wyswietlanie
    void getNote();
////////////////////////////////////////
//edycja
    void editNote();

   vector<string>titles_vector;
   vector<string>content_vector;
};


#endif

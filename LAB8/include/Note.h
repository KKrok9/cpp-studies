#ifndef MAIN_CPP_NOTE_H
#define MAIN_CPP_NOTE_H
#include <iostream>
#include <string>

using namespace std;

class Note{

protected:
    string title ; // tytuł notatki

public:


   string getTitle(); // zwraca tytul notatki
   void setTitle(); // ustawianie tytulu notatki`

   virtual string getContent() = 0; // pobieranie zawartosci notatki
   virtual void setContent() = 0;
};

#endif

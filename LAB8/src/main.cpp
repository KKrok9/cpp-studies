#include <iostream>
#include <string>
#include "../include/Note.h"
#include "../include/TextNote.h"

using namespace std;


int main()
{

    TextNote tn;

                tn.setTitle();
                tn.setContent();


                cout << "Tytul notatki to  "<< tn.getTitle() << endl;
                cout << "tresc notatki jest nastepujaca : \n " << tn.getContent() << endl;
// niedokonczone zadanie bo nie mam pomyslu na resze xdd

    return 0;
}

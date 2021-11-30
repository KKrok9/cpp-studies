#ifndef MAIN_CPP_NOTE_H
#define MAIN_CPP_NOTE_H
#include <iostream>
using namespace std;

class Note{

protected:
    string tytul; // tytul notatki

public:
    string getTitle(); // zwracanie tytulu notatki
    string setTitle(); // ustawienie tytulu notatki
    virtual string getContent(); // pobieranie zawartosci notatki
    virtual string setContent(); // ustawienie zawartosci notatki

};
class TextNote{
protected:
    string content ;// zawwartosc notatki tekstowej
public :
    string getContent(); // pobieranie zawartości notatki
    string setContent(); // ustawienie zawartości notatki
};

class ListNote{
protected:
    string content;
public:
    string getContent(); // pobieranie zawartości notatki
    string setContent(); // ustawienie zawartości notatki
};
class NoteDirector{
protected:
    string notesList;
public:
    string addNote();
    string deleteNote();
    string editNote();
    string clearNotesList();
};

#endif

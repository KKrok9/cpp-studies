#include <iostream>
#include "../include/TextNote.h"
#include <string>
using namespace std;

void TextNote ::setContent()
{
    cout << "Podaj zawartosc notatki : "<< endl;
    string line;
    getline(std::cin,line);
    this -> content = line;
}
string TextNote ::getContent()
{
    return content;
}
#include <iostream>
#include "../include/Note.h"
#include <string>
using namespace std;

string Note ::setTitle(string title)
{
 cout << "Podaj tytul notatki :"<< endl;
 string tytul;
    getline(std::cin,tytul);
    this -> title = tytul;
    titles_vector.push_back(title);
    return title;
}

string Note ::getTitle(string title)
{

 return this -> title;
}//

string Note ::setContent(string content)
{
    cout << "Podaj tresc notatki :"<< endl;
    string tresc;
    getline(std::cin,tresc);
    this -> content = tresc;
    content_vector.push_back(content);
    return content;
}

string Note ::getContent(string content)
{

    return this -> content;
}

void Note :: getNote()
{
    int wybor;
    cout << "Wybierz notatke :" << endl;
    for(auto& var : titles_vector)
    {
        cout << var << endl;
    }
    cin >> wybor ;
    wybor --;
    cout << titles_vector.at(wybor) << endl;
    cout << content_vector.at(wybor) << endl;

}
void Note ::editNote() {
    int wybor;
    int ktora;
    string tytul;
    string tresc;
    cout << "Wybierz notatke :" << endl;
    for(auto& var : titles_vector)
    {
        cout << var << endl;
    }
    cout << "Jesli chcesz edytować tytuł wcisnij 1."<<endl;
    cout << "Jesli chcesz edytować tresc wcisnij 2."<<endl;
    cin >> wybor;
    if ( wybor ==1 )
    {
        for(auto& var : titles_vector)
        {
            cout << var << endl;
        }
        cout << "Ktora notatke chcesz wybrac?" << endl;
        cin >> ktora;
        ktora--;
        cout << "Podaj nowy tytu" << endl;
        getline(std::cin,tytul);
        this -> title = tytul;
        titles_vector.at(ktora)=title;

    }
    if ( wybor ==2 )
    {
        for(auto& var : titles_vector)
        {
            cout << var << endl;
        }
        cout << "Ktora notatke chcesz wybrac?" << endl;
        cin >> ktora;
        ktora--;
        cout << "Podaj nowa tresc" << endl;
        getline(std::cin,tresc);
        this -> content = tresc;
        content_vector.at(ktora)=content;

    }
}





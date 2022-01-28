#include <iostream>
#include <string>
#include "../include/Titles.h"


using namespace std;

void Titles::setTitle(string title) {
    cout << "Podaj tytul przepisu :" << endl;
    cin >> title;
    this -> title = title;
    titles.push_back(title);
}

void Titles::showTitle(int przepis, vector<string> &titles) {
    cout << titles.at(przepis) << endl;
}

void Titles::showTitles() {
    for (auto &var : titles )
        cout <<var<<endl;

}

void Titles::editContent(int przepis) {
    cout << "Podaj nowy tytul :" << endl;
    cin >> title;
    titles.at(przepis)= title;
}


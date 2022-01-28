#include <iostream>
#include <string>
#include "../include/Methods.h"


using namespace std;

void Methods::setMethod(string method) {
    cout << "Podaj sposob przygotowania :" << endl;
    cin >> method;
    this -> method = method;
    methods.push_back(method);
}


void Methods::showMethod(int przepis, vector <string>& methods) {
    cout <<"Sposob przygotowania "<< methods.at(przepis) << endl;
}

void Methods::editContent(int przepis, vector <string>& methods,string method) {
    cout << "Podaj nowe skladniki" << endl;
    cin >> method;
    methods.at(przepis)=method;
}
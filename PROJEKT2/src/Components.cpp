#include <iostream>
#include <string>
#include "../include/Components.h"


using namespace std;

void Components::setComponent(string component) {
    cout << "Podaj skladniki :" << endl;
    cin >> component;
    this -> component = component;
    components.push_back(component);
}

void Components::showComponents(int przepis, vector <string>& components) {
    cout <<"Skladniki : " << components.at(przepis)<<endl;
}

void Components::editContent(int przepis, vector <string>& components) {
    cout << "Podaj nowy sposob przygotowania" << endl;
    cin >> component;
    components.at(przepis)= component;
}
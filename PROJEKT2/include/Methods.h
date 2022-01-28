#ifndef MAIN_CPP_METHODS_H
#define MAIN_CPP_METHODS_H
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Methods
{
public:
    string method; // sposob wykonania
    vector <string> methods; // wektor sposobow wykonania

    void setMethod(string method); //ustaw metode i wpisz ja do wektora
    void showMethod(int przepis, vector <string>& methods); // pokaz sposob wykonania pod indeksem przepis
    void editContent(int przepis, vector <string>& methods, string method); // edytuj sposob wykonania spod indeksu przepis
};




#endif //MAIN_CPP_METHODS_H

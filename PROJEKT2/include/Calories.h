#ifndef MAIN_CPP_CALORIES_H
#define MAIN_CPP_CALORIES_H
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Calories
{
public:
    int calorie;         // zmienna do nadawania ilosci kalorii
    vector <int> calories;// wektor przechowywania iloscki kalorii

    void setCalories(int calorie); // ustawiwanie kalorii
    void showCalories(int przepis, vector <int>& calories); // pokaz kalorie z wybranego indeksu
    void editContent(int przepis, vector <int>& calories, int calorie); // edytuj kalorie z wybranego indeksu
};

#endif //MAIN_CPP_CALORIES_H

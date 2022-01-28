#include <iostream>
#include "../include/Calories.h"


using namespace std;

void Calories::setCalories(int calorie) {
    cout << "Podaj kalorie :" << endl;
    cin >> calorie;
    this -> calorie = calorie;
    calories.push_back(calorie);
}



void Calories::showCalories(int przepis, vector <int>& calories) {
    cout <<"Kalorie :" << calories.at(przepis) << endl;
}

void Calories::editContent(int przepis, vector<int> &calories, int calorie) {
    cout << "Podaj nowa ilosc kalorii : " << endl;
    cin >> calorie;
    calories.at(przepis)=calorie;
}
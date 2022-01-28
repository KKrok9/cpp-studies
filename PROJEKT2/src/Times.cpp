#include <iostream>
#include <string>
#include <vector>
#include "../include/Times.h"
using namespace std;

void Times::setTime(int time) {
    cout << "Podaj czas wykonania :" << endl;
    cin >> time;
    this -> time = time;
    times.push_back(time);
}



void Times::showTime(int przepis, vector <int> times) {
    cout <<"Czas Przygotowania :" << times.at(przepis)<<endl;
}

void Times::editContent(int przepis, vector<int> times) {
    cout << "Podaj nowy czas przygotowania :" << endl;
    cin >> time;
    times.at(przepis)=time;
}




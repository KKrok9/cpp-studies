#ifndef MAIN_CPP_TIMES_H
#define MAIN_CPP_TIMES_H
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Times
{
private:
    int time; // czas wykonania przepisu

public:

    vector <int> times; // przechowywanie czasow wykonania

    void setTime(int time); // ustaw czas wykonania
    void showTime(int przepis, vector <int> times); // pokaz czas wykonania danego przepisu z indeksu przepis
    void editContent(int przepis, vector <int> times); // edytuj czas wykonania

};
#endif //MAIN_CPP_TIMES_H

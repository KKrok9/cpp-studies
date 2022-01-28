#include <iostream>
#include "../include/Titles.h"
#include "../include/Components.h"
#include "../include/Calories.h"
#include "../include/Times.h"
#include "../include/Methods.h"
#include "stdlib.h"
#include <string>
#include <vector>
#include <fstream>

using namespace std;
int main(int argc, char* argv[])
{
    int przepis;
    int wybor1,wybor2;
    string  kontynuuj;

    App aplikacja;
    Titles tytuly;
    Components skladniki;
    Calories kalorie;
    Times czas;
    Methods sposob;


    string tytulF;

    ifstream myFile;
    myFile.open(R"(C:\Users\Kacper\CLionProjects\JiPP2\PROJEKT2\database\przepisy.csv)");
    if (myFile.fail())
    {
        cout << "Nie udalo sie otworzyc pliku" << endl;
    }
    getline(myFile,tytulF,',');
    cout <<tytulF;



    cout << "Data oddawania projektu : " << argv[1] << " " <<argv[2] <<" "<< "2022 roku" << endl;
    do {
        aplikacja.show_menu();

        cin >> wybor1;
        switch (wybor1) {
            case 1:
                cout << "Ktory przepis chcesz wybrac" << endl;
                tytuly.showTitles();
                cin >> przepis;
                przepis--;
                cout << "Wybrales :";
                tytuly.showTitle(przepis,tytuly.titles);
                skladniki.showComponents(przepis,skladniki.components);
                sposob.showMethod(przepis,sposob.methods);
                czas.showTime(przepis,czas.times);
                kalorie.showCalories(przepis,kalorie.calories);
                cout << "Wcisnij klawisz zeby kontunuowac... " << endl;
                cin >> kontynuuj;
                break;
            case 2:
                tytuly.setTitle("");
                skladniki.setComponent("");
                sposob.setMethod("");
                kalorie.setCalories(0);
                czas.setTime(0);
                cout << "Dodano przepis, wcisnij klawisz zeby kontynuowac ..." << endl;
                cin >> kontynuuj;
                break;
            case 3:
                system("CLS");
                cout << "Ktory przepis chcesz wybrac" << endl;
                tytuly.showTitles();
                cin >> przepis;
                przepis--;
                cout << "Co chcesz edytowac ?" << endl;
                cout << "1. Tytul \t 2.Skladniki \t 3. Sposob przygotowania \t 4. Ilosc kalorii \t 5. Czas przygotowania \n" << endl;
                cin >> wybor2;
                switch(wybor2) {
                    case 1:
                    tytuly.editContent(przepis);
                    break;
                    case 2:
                    skladniki.editContent(przepis, skladniki.components);
                    break;
                    case 3:
                    sposob.editContent(przepis, sposob.methods, sposob.method);
                    break;
                    case 4:
                    kalorie.editContent(przepis,kalorie.calories,0);
                    break;
                    case 5:
                    czas.editContent(przepis,czas.times);
                }
                cout << "Edytowano przepis, wcisnij enter aby wrocic ..." << endl;
                kontynuuj = cin.get();

        }
    }while(wybor1!=0);
    return 0 ;
}

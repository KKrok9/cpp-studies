#include <iostream>
#include <string>
#include <windows.h>
#include "../include/Note.h"


using namespace std;


int main() {
    Note notatki;
    int choose;
do{
    cout << "NOTATNIK" << endl;
    cout << "co chcesz zrobic?" << endl;
    cout << "1. dodaj notatke \n2. Wyswietl notatke \n3. Edytuj notatke\n0.Wyjdz" << endl;
    cin >> choose;
    switch (choose) {

        case 1:
            notatki.setTitle("");

            notatki.setContent("");
            break;

        case 2:
            notatki.getNote();
            break;
        case 3:
            notatki.editNote();
            break;
    }
}while(choose!=0);
    return 0;
}

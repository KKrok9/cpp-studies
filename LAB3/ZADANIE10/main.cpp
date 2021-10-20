#include <iostream>
using namespace std;
int rozmiar; // rozmiar tablocy zankow
int konwertujNaLiczbe(const char* data) {
    int a = 0;
    for (int i = 0; data[i]; i++)
    {
        if (a * 10 < 0)
            throw "Wprowadzona liczba jest za duza";
        if (data[i] >= '0' && data[i] <= '9')
            a = a * 10 + data[i] - '0';
        else
            throw "Wprowadzony ciag zawiera nieprawidlowe znaki";
    }
    return a;
}

int main() {
    cout << "Podaj ilosc znakow :"
    cin >> rozmiar;

    char* tab = new char[rozmiar]; // alokacja
    cin.getline(tab, rozmiar); // uzupelnianie tekstu

    try {
        cout << konwertujNaLiczbe(data);
    }
    catch (const char* msg) {
        cout << msg;
    }
    cout << endl;
    system("pause");
    return 0;
}
#include <iostream>
#include <string>
// kompletnie nie wiem jak się do tego zabrać :'(

int main() {
    char* tab = new char[32];
    std :: cout << "Podaj tekst do konwersji :";
    std :: cin.getline(tab, 32);
    throw "Nie mozna przekonwertowac na liczbe";
    try
    {
        int atoi(const char *tab);
        std::cout << "Tekst po konwersji na int wyglada nastepujaco : " << atoi;
    }
   catch()
   {

   }
    return 0;
}
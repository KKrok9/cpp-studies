#include <iostream>
#include "../include/calc.hpp"
#include <string>
using namespace std;

int add (int *a, int *b)
{
  return *a + *b ;
}
int subtract (int *a, int *b)
{
    return *a - *b ;
}
int volume (int *a, int *b)
{
    return *a * *b ;
}
void help()
{
    cout<<"\n Wymagana liczba wpisywanich argumentow to 3.";
    cout <<"Argumenty wpisuj w nastepujacej sekwencji : funkcja liczba a liczba b ";
    cout <<"\n Funkcja: \n add - dodaje dwie liczby \n subtract- odejmuje dwie liczby\n volume- oblicza objetosc graniastoslupa prostego o podstawie trapezu \n help- wyswietla pomoc";
}
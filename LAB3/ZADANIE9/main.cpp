#include <iostream>
using namespace std ;
int a, b;
void dzielenie(int a , int b)
{
    if(a<b)
    {
        cout << "Liczba a musi byc wieksza niz b "<< endl;
    }

    else if(a%b != 0)
    {
        cout << "Liczba a nie jest podzielna przez b";
    }

    else
    {
        cout << "\nWynik dzielenia to :" << a/b<< endl;
    }
}
int main()
{
cout << "               DZIELENIE LICZB NATURALNYCH "<< endl ;

cout << "Podaj liczbe a :"<< endl;
cin >> a;

cout << "Podaj liczbe b :"<< endl;
cin >> b;

dzielenie(a,b);

return 0;
}




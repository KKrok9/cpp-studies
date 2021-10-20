#include <iostream>
using namespace std ;
int a = 10,b = 20;
int *wsk = &b;
int przypisanie(int a, int *wsk)
{
    *wsk = a;
    return (*wsk);
}
int main()
{
    cout << "Wartosc b przed zamiana wynosi : " << b << endl;
    ///////////
    przypisanie(a,wsk);
    cout <<"Wartosc b po zamianie wynosi :" << b << endl;

    return 0;
}

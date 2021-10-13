#include <iostream>
#include <string>
#include "../include/calc.hpp"
using namespace std;

int main(int argc, char *argv[])
{
    string choose = string(argv[1]);
    int a = atof(argv[2]);
    int b = atof(argv[3]);

if(argc != 4 )
{
    cout << "Funkcja wymaga wpisania 3 argumentow! ";
}
else
{
    if(choose == "add")
    {
       cout << "Suma wynosi : "<< add(&a,&b) ;
    }
    else if( choose == "subtract")
    {
        cout << "Roznica wynosi : "<< subtract(&a,&b);
    }
    else if( choose == "volume")
    {
        cout << "Objetosc wynosi : "<<volume(&a,&b);
    }
    else
    {
        help();
    }

}
return 0;
}

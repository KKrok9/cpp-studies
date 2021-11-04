#include <iostream>
#include <string>
using namespace std;
// Nie idzie mi cos z tymi destruktorami :(((
class Zadania
{
public:
    Zadania();
    ~Zadania();
};

int main()
{
    Zadania *Zadaniaa;
    Zadaniaa = new Zadania;

    delete Zadaniaa;
    return 0;
}
Zadania :: Zadania()
{
    cout<< "Konstruktor Wywolany."<<endl;
}



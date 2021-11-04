#include <iostream>
#include <string>
using namespace std;

class Zadania
{
public:
    Zadania();
    ~Zadania();
    int * tab = new int[1024];
    void pause()
    {
        system("PAUSE");
    }


};

int main()
{
    Zadania * Zadania1;
    Zadania1 = new Zadania;


    Zadania1->pause();
    delete Zadania1;
    return 0 ;
}

Zadania::Zadania()
{
    cout << "Konstruktor zostal wywolany!" << endl;
}
Zadania :: ~Zadania()
{
    cout << "Nie ida mi te destruktory ale bedzie dobrze!!!! :D " <<endl;

    delete [] tab;
}



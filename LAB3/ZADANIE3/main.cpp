#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;
int rozmiar;
int wartosc_maksymalna ;
void losowanie(int rozmiar, int *tablica, int wartosc_maksymalna)
{

    cout << "Wylosowane liczby to:" <<endl ;
    for(int i =0; i<rozmiar; i++)
    {
        tablica[i] = (rand()%100) + 1;
        if(tablica[i]>wartosc_maksymalna)
        {
            wartosc_maksymalna=tablica[i];
            }
        cout << tablica[i] << " ";

    }
   cout<<"\nNajwieksza wartosc w powyzszej tablicy to :"<< wartosc_maksymalna<<endl;
}


int main()
{
srand(time(NULL));

 cout << "Podaj rozmiar tablicy :";
 cin >> rozmiar;

 int* tablica = new int [rozmiar];

    losowanie(rozmiar,tablica,wartosc_maksymalna);




delete[] tablica;
    return 0;
}

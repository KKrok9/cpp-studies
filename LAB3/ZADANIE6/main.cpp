//Do napisania program gdzie wczytamy i wypiszemy na ekran elementy tablicy większe od 0 (należy użyć wskaźników).
#include <iostream>
using namespace std;
int ilosc;
int i;
void uzupelnianie(int *tab, int ilosc)
{
    cout << "Podaj "<<ilosc<<" elementow"<< endl;

    for(i = 0 ; i < ilosc ; i++)
    {
        cin >> tab[i];

    }
}
void wypisywanie( int *tab)
{
    cout<<"Elementy wieksze od 0 to :" << endl;

    for(i = 0 ; i < ilosc ; i++)
    {
        if(tab[i]>0)
        {
            cout<<tab[i]<<endl;
        }
    }

}

int main()
{


    cout << "Podaj ilosc elementow :"<< endl;
    cin >> ilosc;
    int* tab = new int [ilosc];

    uzupelnianie(tab,ilosc);
    wypisywanie(tab);

delete[] tab;
    return 0;
}

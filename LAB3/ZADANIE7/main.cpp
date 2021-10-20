//Do napisania jest funkcja do sortowania liczb, które są zapisane w zmiennych w rosnącej kolejności. Należy użyć wskaźników
#include <iostream>
using namespace std;

int a = 70 ;
int b = 100;
int c = 50;
void insert_sort(int* tab)
{

    for (int i = 1; i < 3; i++)
    {
       int x = tab[i];
       int j = i - 1;
        while (j >= 0 && tab[j] > x)
        {
            tab[j + 1] = tab[j];
            --j;
        }
        tab[j + 1] = x;


    }
}
void wypisywanie(int *tab)
{
for(int i = 0; i <=2 ; i++)
{
cout << tab[i] <<endl; // wypisywanie
}
}

int main()
{
    int *wsk_a = &a; // tworzenie wskaznikow
    int *wsk_b = &b;
    int *wsk_c = &c;
    int* tab = new int [3]; // alokacja

    tab[0] = *wsk_a; // przypisanie wartosci pod wskaznikiem do elementow tablicy
    tab[1] = *wsk_b;
    tab[2] = *wsk_c;

    cout << "Przed sortowaniem : "<< endl;
    wypisywanie(tab);

    cout << "Po sortowaniu : "<< endl ;
    insert_sort(tab); // insertion
    wypisywanie(tab);

    delete [] tab;
return 0;
}



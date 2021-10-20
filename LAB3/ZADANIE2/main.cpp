#include <iostream>
#include <ctime>

using namespace std;
int a,b,liczba;
int losowanie (int a , int b)
{
    liczba = rand()%(b-a+1)+a;
    return(liczba);
}
int main()
{
    srand(time(NULL));
    cout<< "Podaj przedzial z ktorego chcesz wylosowac liczby :"<<endl;
    cout << "Od :" << endl;
    cin >> a;
    cout << "Do :" << endl;
    cin >> b;
    cout << "Wylosowana liczba to : "<<losowanie(a,b)<<endl;
    return 0;
}


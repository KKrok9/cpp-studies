//Do napisania jest program pobierający 2 liczby oraz ustawi wskaźniki na ich adresach, a także obliczy ich średnią. Należy wykorzystać wskaźniki.
#include <iostream>
using namespace std;
double srednia(double *wsk_a, double *wsk_b)
{
    return((*wsk_a+*wsk_b)/2);
}
int main()
{
    double a , b;
    cout << "Podaj liczbe a :"<<endl;
    cin >> a;
    cout <<"Podaj liczbe b :"<<endl;
    cin >> b;
    double *wsk_a = &a;
    double *wsk_b = &b;
    cout << "Srednia a i b jest rowna :" << srednia(wsk_a,wsk_b)<<endl;
    return 0;
}


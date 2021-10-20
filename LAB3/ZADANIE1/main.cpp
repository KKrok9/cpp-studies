#include <iostream>

using namespace std;

int pole(int a, int b)
{
    return(a*b);
}
double pole(double a)
{
    return(3.14*a*a);
}
int main()
{
    cout << "Pole kwadratu wynosi :"<< pole(5,6)<<endl;
    cout << "Pole kola wynosi : "<< pole(8)<<endl;

    return 0;
}

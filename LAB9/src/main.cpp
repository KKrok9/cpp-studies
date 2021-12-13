#include <iostream>
#include <list>


using namespace std;
int main() {

    list<char> li = {'a','b','c'};
    list<char>::iterator x;

    for (x = li.begin(); x != li.end(); x++)
    {
        advance(x,2);
        cout << *x << endl;

    }

    return 0;
}
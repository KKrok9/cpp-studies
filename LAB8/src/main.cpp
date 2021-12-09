#include <iostream>
#include <string>
#include "../include/Note.h"
#include "../include/TextNote.h"

using namespace std;


int main()
{
    TextNote tn;


    tn.setTitle();
    tn.setContent();
    cout << tn.getTitle() <<endl;
    cout << tn.getContent() << endl;


        return 0;
    }

#ifndef MAIN_CPP_TEXTNOTE_H
#define MAIN_CPP_TEXTNOTE_H
#include <string>
#include <iostream>
#include "../include/Note.h"

class TextNote : public Note
{
protected :
string content ;

public :
    void setContent() override ;
    virtual string getContent() override; //

};
#endif //MAIN_CPP_TEXTNOTE_H

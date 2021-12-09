
#ifndef MAIN_CPP_LISTNOTE_H
#define MAIN_CPP_LISTNOTE_H
#include <string>
#include "Note.h"

class ListNote : public Note
        {
private:
    string content;
public;
    void setContent() override;
    string getContent() override;
};

// ??????????????????????????

#endif //MAIN_CPP_LISTNOTE_H

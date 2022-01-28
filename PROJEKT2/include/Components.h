#ifndef MAIN_CPP_COMPONENTS_H
#define MAIN_CPP_COMPONENTS_H
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Components
{
private:
string component; // skladniki

public:

    vector <string> components; // wektor do przechowywania skladnikow

    void setComponent(string component); //ustawianie skladnikow
    void showComponents(int przepis, vector <string>& components); // pokaz skaldniki z indeksu przepis
    void editContent(int przepis, vector <string>& components); // edytuj skladniki z indeksu przepis
};


#endif //MAIN_CPP_COMPONENTS_H

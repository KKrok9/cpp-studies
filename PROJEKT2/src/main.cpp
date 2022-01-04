#include <iostream>
#include "../include/App.h"

using namespace std;

int main()
{
App aplikacja ;
Recipes przepisy;
    int wybor;


do{
    aplikacja.show_menu();
    cin>>wybor;
switch(wybor) {
    case 1:
        przepisy.show_titles();
        przepisy.show_recipe();
        break;
    case 2:
        przepisy.set_title("");
        przepisy.set_time(12);
        przepisy.set_calories(0);
        przepisy.set_ingredients("");
        przepisy.set_method("");
        break;
}
}while(wybor!=0);

    return 0 ;
}

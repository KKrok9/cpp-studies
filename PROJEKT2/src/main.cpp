#include <iostream>
#include "../include/App.h"

using namespace std;

int main()
{
    int przepis;
App aplikacja ;
Recipes przepisy;
    int wybor;


do{
    aplikacja.show_menu();
    cin>>wybor;
switch(wybor) {
    case 1:
        przepisy.show_titles();
        cout << "Ktory przepis chcesz wybrac? " << endl;
        cin >> przepis;
        przepis--;
        przepisy.show_recipe(przepis);
        break;
    case 2:
        przepisy.set_title("");
        przepisy.set_time(12);
        przepisy.set_calories(0);
        przepisy.set_ingredients("");
        przepisy.set_method("");
        break;

    case 3:

        cout << "Ktory przepis chcesz edytowac?" << endl;
        przepisy.show_titles();
        cin >> przepis ;
        przepis--;
        przepisy.show_recipe(przepis);
        przepisy.edit_recipe(przepis);
        break;
}
}while(wybor!=0);

    return 0 ;
}

#include <iostream>
#include <string>
#include "../include/App.h"

using namespace std;

void App::show_menu() {
    cout << "KSIAZKA KUCHARSKA" << endl;
    cout << "Wcisnij : "<< endl;
    cout << "1. Pokaz moje przepisy." << endl;
    cout << "2. Dodaj przepis." << endl;
    cout << "3. Edytuj przepis." << endl;
    cout << "4. Losuj przepis." << endl;

}


void Recipes::set_title(string title) {
    cout << "Podaj tytul przepisu :" ;
    cin >> title;
    this -> title = title;
    titles_vector.push_back(title);
}

void Recipes::show_titles()
{
    for(auto& var : titles_vector)
    {
        cout << var << endl;
    }
}

void Recipes::set_calories(int calories) {
    cout << "Podaj ilosc kalorii : ";
    cin >> calories;
    this ->calories = calories;
    calories_vector.push_back(calories);
}


void Recipes::set_ingredients(string ingredients) {
    cout << "Podaj skladniki :";
    cin >> ingredients;
    this ->ingredients=ingredients;
    ingredients_vector.push_back(ingredients);
}


void Recipes::set_time(int time) {

    cout << "Podaj czas wykonania w minutach :";
    cin >> time;
    this ->time = time;
    time_vector.push_back(time);
}


void Recipes::set_method(string method) {
    cout << "Podaj sposob przyrzadzenia"<<endl;
    cin >> method;
    this->method=method;
    method_vector.push_back(method);
}

void Recipes::show_recipe() {
    int przepis;
    cout << "Ktory przepis chcesz wybrac? " << endl;
    cin >> przepis;
    przepis--;
    cout << "Fantastyczny wybor !" <<endl;
    cout << titles_vector.at(przepis)<<endl;
    cout << "Czas wykonania: " <<time_vector.at(przepis)<<" minut"<<endl;
    cout << "Kalorie: "<<calories_vector.at(przepis)<<"kcal"<<endl;
    cout << "Składniki: " <<ingredients_vector.at(przepis)<<endl;
    cout << "Sposob przygotowania: "<<method_vector.at(przepis)<<endl;
}
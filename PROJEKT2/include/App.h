#include <iostream>
#include <string>
#include <vector>
using namespace std;
#ifndef MAIN_CPP_APP_H
#define MAIN_CPP_APP_H

class App{

public:

    void show_menu();  // chwilowe konsolowe menu
    void my_recipes(); // moje przepisy - po kliknieciu pokazują się nazwy wszystkich przepisów
    void add_recipe(); // dodaj przepis - po kliknieciu nastepuje sekwencja funkcji set title itp
    void edit_recipe(); // edycja przepisów - po kliknieciu pokazuje się co chcemy edytować, usuwamy obecny stan
                        // danego elementu, np przepisu i dodajemy nowy
    void random_recipe(); // tytuly są zapisywane do tablicy, losujemy numerek i wybieramy danie ktore dzisiaj zjemy
                            // wszystkie przepisy będą w jednej tablicy//
    void choose();
    friend class Recipes;
};

class Recipes{


protected:

    string title ; // nazwa przepisu
    int calories ; // ilosc kalorii
    string ingredients; // potrzebne skladniki
    int time; // czas przygotowania
    string method ; // sposób przygotowania



    vector<string>titles_vector;
    vector<int>calories_vector;
    vector<string>ingredients_vector;
    vector<int>time_vector;
    vector<string>method_vector;

public:

    void set_title(string title);
    void show_titles(); // pokazanie wszystkich tytulow w wektorze

    void set_calories(int calories);

    void set_ingredients(string ingredients);

    void set_time(int time);

    void set_method(string method);

    void show_recipe(int przepis);
    void edit_recipe(int przepis);
};

#endif

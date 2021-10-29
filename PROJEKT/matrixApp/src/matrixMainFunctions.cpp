#include <iostream>
#include "../include/matrixMainFunctions.h"

using namespace std;


void editingSize(int *rows1, int *columns1, int x = 1)
{

    // macierz 1
    cout << "Podaj ilosc wierszy macierzy "<< x <<endl;
    cin >> *rows1;

    cout << "Podaj ilosc kolumn macierzy " << x <<endl;
    cin >> *columns1;
    // trzeba dodac zabezpieczenie przed podaniem np wyrazu zamiast konkretnej liczby

}

void allocation(double **tab1,int rows1, int columns1)
{
    for(int i = 0; i < rows1; ++i)
    {
        tab1[i] = new double[columns1];
    }
}
void refillingMatrix(double **tab1, int rows1, int columns1)
{
    cout << "Dodaj wartosci do odpowiednich miejsc w macierzy :"<< endl;
    for(int i = 0 ; i < rows1 ; i++)
    {
        for(int j=0 ; j < columns1 ; j++)

        {
            cout << "["<< i+1 << "]" << "[" << j+1 << "]" << endl;
            cin >> tab1[i][j];
        }
    }

}
void displayMatrix(double **tab1, int rows1, int columns1) {

    for (int i = 0; i < rows1; i++)
    {
        for(int j = 0 ; j < columns1 ; j++)
        {
            cout <<"  "<< tab1[i][j] ;
        }
        cout << endl ;
    }
}


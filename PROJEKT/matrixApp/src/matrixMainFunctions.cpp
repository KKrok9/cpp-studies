#include <iostream>
#include "../include/matrixMainFunctions.h"

using namespace std;


void editingSize(int *rows1, int *columns1)
{
    cout << "Wiersze :"<< endl;
    cin >> *rows1;
    cout << "Kolumny :" << endl;
    cin >> *columns1;
    if (*rows1 < 0 || *columns1 < 0)
    {
        help();
    }

}

void allocation(double **tab1,int rows1, int columns1)
{
    for(int i = 0; i < rows1; ++i)
    {
        tab1[i] = new double[columns1];
    }
}

void allocation(int **tab1,int rows1, int columns1)
{
    for(int i = 0; i < rows1; ++i)
    {
        tab1[i] = new int[columns1];
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


void refillingMatrix(int **tab1, int rows1, int columns1)
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

void displayMatrix(int **tab1, int rows1, int columns1) {

    for (int i = 0; i < rows1; i++)
    {
        for(int j = 0 ; j < columns1 ; j++)
        {
            cout <<"  "<< tab1[i][j] ;
        }
        cout << endl ;
    }
}

void help ()
{
    cout << "Wymiar macierzy musi byc liczba dodatnia"<<endl;
    cout << "Aby wykonac dodawanie i odejmowanie macierzy, ilosc kolumn i wierszy, musi byc taka sama" << endl;
    cout << "Liczba kolumn macierzy A, musi byc rowna liczbie wierszy macierzy B!!!"<< endl;
}
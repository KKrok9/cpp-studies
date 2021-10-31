#include <iostream>
#include "../matrixApp/include/matrixMainFunctions.h"
#include "../matrixLib/include/matrix.h"
using namespace std;


int main()
{
    int rows1,rows2; // inicjalizacja zmiennych odpowiadajacych za wiersze
    int columns1, columns2;// kolumny
    double scalar; // skalar
    int wybor;
    int exponent;
    int a , b;
    int row;

    // MATRIX1

    cout << "Podaj ilosc wierszy macierzy 1 "<<endl;
    editingSize(&rows1,&columns1 ;
    double** tab1 = new double *[rows1];
    allocation(tab1,rows1,columns1);

    //////////
    // MATRIX2
    ///////////

    cout << "Podaj ilosc wierszy macierzy 2 "<<endl;
    editingSize(&rows2,&columns2);
    double ** tab2 = new double *[rows2];
    allocation(tab2,rows2,columns2);
    //
    // uzupelnianie macierzy :

    refillingMatrix(tab1,rows1,columns1);
    refillingMatrix(tab2,rows2,columns2);

    //wyswietlanie wartosci
    cout << "Macierz 1 wyglada nastepujaco :"<<endl;
    displayMatrix(tab1,rows1,columns1);
    cout << "Macierz 2 wyglada nastepujaco :"<<endl;
    displayMatrix(tab2,rows2,columns2);
    double *arr = new double[columns1];
///////////////////////////////////////////////////////////////////
    cout << "Jaka operacje chcesz wybrac :" << endl;
    cout << "1.Dodawanie \n2.Odejmowanie.\n3.Mnozenie\n4.Mnozenie przez skalar \n5.Transpozycja.\n6.Potegowanie\n7.Obliczanie wyznacznika macierzy\n8.Sprawdzenie czy macierz jest diagonalna.\n9.Zamiana dwoch elementow.\n10.Sortowanie tablicy za pomoaca sortowania babelkowego.\n11.Sortowanie wszystkich wierszy w macierzy"<<endl;

    cin >> wybor;

    switch(wybor) {

        case 1 :
            addMatrix(tab1, tab2, rows1, columns1);
        break;

        case 2:
            subtractMatrix(tab1, tab2, rows1, columns1);
        break;

        case 3:
            multiplyMatrix(tab1, tab2, rows1, rows2, columns1);
        break;

        case 4:
            multiplyByScalar(tab1, rows1, columns1, &scalar);
        break;

        case 5:
            transpozeMatrix(tab1, rows1, columns1);
        break;

        case 6:
            powerMatrix(tab1,rows1,rows2,columns1,&exponent);
        break;

        case 7:
            cout << "Wyznacznik jest rowny :" << determinantMatrix(tab1,rows1,columns1) << endl;
        break;

        case 8:
            if(matrixIsDiagonal(tab1,rows1,columns1) == true)
            {
                cout << "Macierz jest diagonalna"<<endl;
            }
            else
            {
                cout << "Macierz nie jest diagonalna"<< endl;
            }
        break;

        case 9:
            cout << "Podaj dwie liczby ktore chcesz zamienic :"<< endl;
            cin >>a;
            cin >> b;
            swap (a,b);
            cout << "Po zamianie liczba a ma wartosc :" << a << " a liczba b "<< b << endl;
            break;

            case 10:

            cout << "Ktory wiersz macierzy 1 chcesz posortowac?"<<endl;
            cin >> row;
            for(int i = 0 ; i < columns1; i++)
            {
                arr[i] = tab1[row-1][i];// przepisywanie wartosci do arr
            }
            sortRow(arr,columns1);
            for(int i = 0; i< columns1 ; i++)
            {
                cout << arr[i]<<endl;
            }
            break;

            case 11:
            sortRowInMatrix(tab1,rows1,columns1);
            displayMatrix(tab1,rows1,columns1);
            break;

    }

    for (int i = 0 ; i < rows1; i ++) // zwalnianie pamieci
    {
        delete[]tab1;
        delete[]tab2;

    }


    return 0;
}
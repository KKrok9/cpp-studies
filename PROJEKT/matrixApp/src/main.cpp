#include <iostream>
#include "../matrixApp/include/matrixMainFunctions.h"
#include "../matrixLib/include/matrix.h"
using namespace std;


int main()
{
    int rows1,rows2; // inicjalizacja zmiennych odpowiadajacych za wiersze
    int columns1, columns2;// kolumny
    double scalar; // skalar
    int wyborOperacji;
    int wyborTypu; // typ int czy double
    int exponent;

    int a , b;// liczby do zamiany
    double c, d;// do zamiany

    int row; // wybor wiersza do sortowania




    cout << "Operacje chcesz przeprowadzac na liczbach typu :\n int - wcisnij 1 \n double - wcisnij 2 \n"<<endl;
    cin >> wyborTypu;


    // MATRIX1/////
    ///////////////
    ///////////////

    cout << "Podaj ilosc wierszy i kolumn macierzy 1 "<<endl;
    editingSize(&rows1,&columns1);

        double **tab1 = new double *[rows1];
        allocation(tab1, rows1, columns1);

        int **tab11 = new int *[rows1];
        allocation(tab11, rows1, columns1);

    ///////////////////////////
    // MATRIX2///////////////
    /////////////////////////

    cout << "Podaj wymiary macierzy :"<<endl;
    editingSize(&rows2,&columns2);

    double ** tab2 = new double *[rows2];
    allocation(tab2,rows2,columns2);

    int **tab22 = new int *[rows1];
    allocation(tab22, rows1, columns1);


    //
    // uzupelnianie macierzy :
    if(wyborTypu == 2) {
        refillingMatrix(tab1, rows1, columns1);
        refillingMatrix(tab2, rows2, columns2);
    }
    else if (wyborTypu == 1)
    {
       refillingMatrix(tab11,rows1,columns1);
       refillingMatrix(tab22,rows2,columns2);
    }

    //wyswietlanie wartosci
    if(wyborTypu == 1 )
    {
        cout << "Macierz 1 wyglada nastepujaco :" << endl;
        displayMatrix(tab11, rows1, columns1);
        cout << "Macierz 2 wyglada nastepujaco :" << endl;
        displayMatrix(tab22, rows2, columns2);

    }
    else
    {
        cout << "Macierz 1 wyglada nastepujaco :" << endl;
        displayMatrix(tab1, rows1, columns1);
        cout << "Macierz 2 wyglada nastepujaco :" << endl;
        displayMatrix(tab2, rows2, columns2);

    }
    // alokacja pomocniczych tablic potrzbenych do sortowania

    double *arr2 = new double[columns1];
    int *arr1 = new int[columns1];

///////////////////////////////////////////////////////////////////

    cout << "Jaka operacje chcesz wybrac :" << endl;
    cout << "1.Dodawanie \n2.Odejmowanie.\n3.Mnozenie\n4.Mnozenie przez skalar \n5.Transpozycja.\n6.Potegowanie\n7.Obliczanie wyznacznika macierzy\n8.Sprawdzenie czy macierz jest diagonalna.\n9.Zamiana dwoch elementow.\n10.Sortowanie tablicy za pomoaca sortowania babelkowego.\n11.Sortowanie wszystkich wierszy w macierzy"<<endl;
    cin >> wyborOperacji;

    if(wyborTypu == 1) // dla inta
    {
        switch (wyborOperacji) {

            case 1 :
                addMatrix(tab11,tab22,rows1,columns1);
                break;

            case 2:
                subtractMatrix(tab11,tab22,rows1,columns1);
                break;

            case 3:
                multiplyMatrix(tab11,tab22,rows1,rows2,columns1);
                break;

            case 4:
                multiplyByScalar(tab11, rows1, columns1, &scalar);
                break;

            case 5:
                transpozeMatrix(tab11,rows1,columns1);
                break;

            case 6:
                powerMatrix(tab11, rows1, rows2, columns1, &exponent);
                break;

            case 7:
                cout << "Wyznacznik jest rowny :" << determinantMatrix(tab11,rows1,columns1)<< endl;
                break;

            case 8:
                if (matrixIsDiagonal(tab11,rows1,columns1)) {
                    cout << "Macierz jest diagonalna" << endl;
                } else {
                    cout << "Macierz nie jest diagonalna" << endl;
                }
                break;

            case 9:
                cout << "Podaj dwie liczby ktore chcesz zamienic :" << endl;
                cin >> a;
                cin >> b;
                swap(a,b);
                cout << "Po zamianie liczba a ma wartosc :" << a << " a liczba b " << b << endl;
                break;

            case 10:

                cout << "Ktory wiersz macierzy 1 chcesz posortowac?" << endl;
                cin >> row;
                for (int i = 0; i < columns1; i++) {
                    arr1[i] = tab11[row - 1][i];// przepisywanie wartosci do arr
                }
                sortRow(arr1, columns1);
                for (int i = 0; i < columns1; i++) {
                    cout << arr1[i] << endl;
                }
                break;

            case 11:
                sortRowInMatrix(tab11, rows1, columns1);
                displayMatrix(tab11, rows1, columns1);
                break;

        }
    }


    else if(wyborTypu == 2) {
        switch (wyborOperacji) {

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
                powerMatrix(tab1, rows1, rows2, columns1, &exponent);
                break;

            case 7:
                cout << "Wyznacznik jest rowny :" << determinantMatrix(tab1, rows1, columns1) << endl;
                break;

            case 8:
                if (matrixIsDiagonal(tab1, rows1, columns1) == true) {
                    cout << "Macierz jest diagonalna" << endl;
                } else {
                    cout << "Macierz nie jest diagonalna" << endl;
                }
                break;

            case 9:
                cout << "Podaj dwie liczby ktore chcesz zamienic :" << endl;
                cin >> a;
                cin >> b;
                swap(c,d);
                cout << "Po zamianie liczba a ma wartosc :" << a << " a liczba b " << b << endl;
                break;

            case 10:

                cout << "Ktory wiersz macierzy 1 chcesz posortowac?" << endl;
                cin >> row;
                for (int i = 0; i < columns1; i++) {
                    arr2[i] = tab1[row - 1][i];// przepisywanie wartosci do arr
                }
                sortRow(arr2, columns1);
                for (int i = 0; i < columns1; i++) {
                    cout << arr2[i] << endl;
                }
                break;

            case 11:
                sortRowInMatrix(tab1, rows1, columns1);
                displayMatrix(tab1, rows1, columns1);
                break;

        }
    }
    for ( int i = 0 ; i < rows1; i++) {
        delete[] tab1 [i];
        delete[] tab11[i];
        delete[] tab2[i];
        delete[] tab22[i];
    }
    delete[] arr1;
    delete[] arr2;

    return 0;
}
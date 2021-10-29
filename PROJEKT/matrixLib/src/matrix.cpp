#include <iostream>
#include "../include/matrix.h"
#include "../../matrixApp/include/matrixMainFunctions.h"
using namespace std;

////////////////////////////////////
///////////////// DODAWANIE MACIERZY

double addMatrix(double **tab1, double **tab2, int rows1, int columns1, int x) {

    double** tab3 = new double *[rows1];
    allocation(tab3,rows1,columns1);

    for (int i = 0; i < rows1; i++) {

        for (int j = 0; j < columns1; j++) {

            tab3[i][j]=tab1[i][j]+tab2[i][j] ;

        }
    }
    cout << "Macierz po wykonaniu dodawania wyglada nastepujaco :"<<endl;
    displayMatrix(tab3,rows1,columns1);
    return **tab3;
}
/////////////////////////////////////////////////
//////////////////////////// ODEJMOWANIE MACIERZY

double subtractMatrix(double **tab1, double **tab2, int rows1, int columns1, int x) {

    double** tab3 = new double *[rows1];
    allocation(tab3,rows1,columns1);

    for (int i = 0; i < rows1; i++) {

        for (int j = 0; j < columns1; j++) {

            tab3[i][j]=tab1[i][j]-tab2[i][j] ;

        }
    }
    cout << "Macierz po wykonaniu odejmowania wyglada nastepujaco :"<<endl;
    displayMatrix(tab3,rows1,columns1);
    return **tab3;
}

double multiplyByScalar(double **tab1,int rows1, int columns1,double *scalar,int x)
{
    cout << "Podaj skalar :"<< endl;
    cin >> *scalar;

    for (int i = 0; i < rows1; i++) {

        for (int j = 0; j < columns1; j++) {

            tab1[i][j]= tab1[i][j] * *scalar;

        }
    }
    cout << "Macierz po wymnożeniu przez skalar wyglada nastepujaco :"<<endl;
    displayMatrix(tab1,rows1,columns1);
    return **tab1;

}




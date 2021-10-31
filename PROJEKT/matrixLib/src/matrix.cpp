#include <iostream>
#include "../include/matrix.h"
#include "../../matrixApp/include/matrixMainFunctions.h"
using namespace std;

                                //////////////////////////////////////////
                                ///////////DODAWANIE MACIERZY/////////////
                                //////////////////////////////////////////

int addMatrix(int **tab1, int **tab2, int rows1, int columns1) {

    int** tab3 = new int *[rows1];
    allocation(tab1,rows1,columns1);

    for (int i = 0; i < rows1; i++) {

        for (int j = 0; j < columns1; j++) {

            tab3[i][j]=tab1[i][j]+tab2[i][j] ;

        }
    }
    cout << "Macierz po wykonaniu dodawania wyglada nastepujaco :"<<endl;
    displayMatrix(tab3,rows1,columns1);
    return **tab3;
}

double addMatrix(double **tab1, double **tab2, int rows1, int columns1) {

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






                                    ///////////////////////////////////////
                                    /////////ODEJMOWANIE MACIERZY//////////
                                    ///////////////////////////////////////

double subtractMatrix(double **tab1, double **tab2, int rows1, int columns1) {

    double ** tab3 = new double *[rows1];
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
int subtractMatrix(int  **tab1, int **tab2, int rows1, int columns1) {

    int ** tab3 = new int *[rows1];
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



                                    /////////////////////////////////////
                                    ///////////Mnożenie macierzy/////////
                                    /////////////////////////////////////

double multiplyMatrix(double **tab1, double **tab2,int rows1, int rows2, int columns2)
{

    double** tab3 = new double *[rows1];
    allocation(tab3,rows1,columns2);
    cout << "Macierz wynikowa wyglada nastepujaco :\n" << endl;

    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < columns2; j++) {
            tab3[i][j] = 0;

            for (int k = 0; k < rows2; k++) {
                tab3[i][j] += tab1[i][k] * tab2[k][j];
            }

            cout << tab3[i][j] << "\t";
        }

        cout << endl;
    }
    return **tab3;
}





                                ///////////////////////////////////////////////
                                /////////Mnożenie przez skalar/////////////////
                                ///////////////////////////////////////////////


double multiplyByScalar(double **tab1,int rows1, int columns1,double *scalar)
{
    cout << "Podaj skalar :"<< endl;
    cin >> *scalar;

    for (int i = 0; i < rows1; i++) {

        for (int j = 0; j < columns1; j++) {

            tab1[i][j]= tab1[i][j] * *scalar;

        }
    }
    cout << "Macierz po wymnozeniu przez skalar wyglada nastepujaco :"<<endl;
    displayMatrix(tab1,rows1,columns1);
    return **tab1;

}


                                                ///////////////////////////////
                                                ////transponowanie_macierzy///
                                                /////////////////////////////

double transpozeMatrix(double **tab1,int rows1, int columns1) {
    double **tab3 = new double *[rows1];
    allocation(tab3, rows1, columns1);
    cout << "Macierz po wykonaniu transpozycji wyglada nastepujaco  :" << endl;
    for (int i = 0; i < rows1;++i)
    {
        for(int j=0; j < columns1 ; ++j)
        {
            tab3[j][i] = tab1[i][j];
        }
    }
    displayMatrix(tab3,columns1,rows1);
    return **tab3;
}

int transpozeMatrix(int **tab1,int rows1, int columns1) {
    int **tab3 = new int *[rows1];
    allocation(tab3, rows1, columns1);
    cout << "Macierz po wykonaniu transpozycji wyglada nastepujaco  :" << endl;
    for (int i = 0; i < rows1;++i)
    {
        for(int j=0; j < columns1 ; ++j)
        {
            tab3[j][i] = tab1[i][j];
        }
    }
    displayMatrix(tab3,columns1,rows1);
    return **tab3;
}

                                        ////////////////////////////////////
                                        //////Potęgowanie_Macierzy//////////
                                        ///////////////////////////////////



double powerMatrix(double **tab1, int rows1,int rows2, int columns1,int *exponent)
{
    cout << "Podaj potege"<<endl;
    cin>> *exponent;
    double **tab3 = new double *[rows1];
    double **helpTab = new double *[rows1];
    allocation(tab3, rows1, columns1);
    allocation(helpTab, rows1, columns1);

    for (int i = 0;i<rows1;++i)
    {
        for(int j=0; j<columns1; ++j)
        {
            tab3[i][j] = tab1[i][j];
            helpTab[i][j] = tab1[i][j];
        }
    }
    if(*exponent > 0)
    {
        for(int i = 2;i <= *exponent; i++)
        {
            **tab3 = multiplyMatrix(tab3, helpTab,rows1,rows1, columns1);
        }
        }
    else if (*exponent==0)
    {
        for(int i = 0 ; i < rows1 ; i++) {
            for (int j = 0; j < columns1; j++){
                if (i==j){

                    tab3[i][j] =1;
                }

                else{
                    tab3[i][j]=0;
                }

            }
        }
    }
    return **tab3;
}



                                            /////////////////////////////
                                            /////WYZNACZNIK_MACIERZY/////
                                            /////////////////////////////

void helperForDouble(double **tab1, double **helpTab, int rows1,int columns1, int n)
{
    int x = 0;
    int y = 0;



    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j<n; j++)
        {
            if (i != rows1 && j != columns1)
            {
                helpTab[x][y++] = tab1[i][j];

                if (y == n - 1)
                {
                    y = 0;
                    x++;
                }
            }
        }
    }
}
void helperForInt(int **tab1, int **helpTab, int rows1,int columns1, int n)
{
    int x = 0;
    int y = 0;



    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j<n; j++)
        {
            if (i != rows1 && j != columns1)
            {
                helpTab[x][y++] = tab1[i][j];

                if (y == n - 1)
                {
                    y = 0;
                    x++;
                }
            }
        }
    }
}


double determinantMatrix(double **tab1, int rows1,int columns1)
{
    int res = 0;
    int var = 1;

    double **helpTab = new double *[rows1];
    allocation(helpTab, rows1, columns1);

    if (rows1 == 1)
    {
        return tab1[0][0];
    }
    else if(rows1 == 2)
    {
        return (tab1[0][0] * tab1[1][1] - tab1[0][1] * tab1[1][0]);
    }

    for (int i = 0 ; i < rows1; i++)
    {
        helperForDouble(tab1,helpTab,0, i, rows1 );
        res += var * tab1[0][i] * determinantMatrix(helpTab,rows1-1,columns1);
        var = -var;

    }


    return res;
}
int determinantMatrix(int **tab1, int rows1,int columns1)
{
    int res = 0;
    int var = 1;

    int **helpTab = new int *[rows1];
    allocation(helpTab, rows1, columns1);

    if (rows1 == 1)
    {
        return tab1[0][0];
    }
    else if(rows1 == 2)
    {
        return (tab1[0][0] * tab1[1][1] - tab1[0][1] * tab1[1][0]);
    }

    for (int i = 0 ; i < rows1; i++)
    {
        helperForInt(tab1,helpTab,0, i, rows1 );
        res += var * tab1[0][i] * determinantMatrix(helpTab,rows1-1,columns1);
        var = -var;

    }


    return res;
}

                                                        ////////////////////////////////////////////////////////
                                                        /////////////SPRAWDZENIE DIAGONALNOŚCI MACIERZY///////
                                                        ///////////////////////////////////////////////////////

bool matrixIsDiagonal (double **tab1, int rows1, int columns1)

{
    for ( int i = 0; i <rows1; i++)
    {
        for(int j = 0; j < columns1; j++ )
        {
            if (i!=j && tab1[i][j]!= 0)
            {
                return false;
            }
        }
        return true;
    }

}

bool matrixIsDiagonal (int **tab1, int rows1, int columns1)

{
    for ( int i = 0; i <rows1; i++)
    {
        for(int j = 0; j < columns1; j++ )
        {
            if (i!=j && tab1[i][j]!= 0)
            {
                return false;
            }
        }
        return true;
    }

}

                                    ///////////////////////////////////////
                                    /////////Zamiana elementow macierzy////
                                    ///////////////////////////////////////

void swap(int &a, int &b)
{
    int var = a;
    a = b;
    b = var;
}

                                    //////////////////////////////////////
                                    //////Sortowanie bąbelkowe///////////
                                    ////////////////////////////////////

double sortRow(double *arr, int columns1)
{

    for(int i = 0; i < columns1; i++) {
        for (int j = 0; j < columns1 - 1; j++)
        {
            if (arr[j]> arr[j+1])
            {
                swap(arr[j+1], arr[j]);
            }
        }
    }
    return *arr;
}

int sortRow(int *arr, int columns1)
{

    for(int i = 0; i < columns1; i++) {
        for (int j = 0; j < columns1 - 1; j++)
        {
            if (arr[j]> arr[j+1])
            {
                swap(arr[j+1], arr[j]);
            }
        }
    }
    return *arr;
}

                                        ///////////////////////////////
                                        ////SORTOWANIE MACIERZY//////////
                                        //////////////////////////////
double sortRowInMatrix(double **tab1, int rows1, int columns1)
{
    double **tab3 = new double *[rows1];
    allocation(tab3, rows1, columns1);
    for(int i = 0 ; i< rows1; i++)
    {
        sortRow(tab1[i],columns1);
    }
    return **tab1;
}


int sortRowInMatrix(int **tab1, int rows1, int columns1)
{
    int **tab3 = new int *[rows1];
    allocation(tab3, rows1, columns1);
    for(int i = 0 ; i< rows1; i++)
    {
        sortRow(tab1[i],columns1);
    }
    return **tab1;
}

///////////////////////////////////////////////////////////////////////////////////

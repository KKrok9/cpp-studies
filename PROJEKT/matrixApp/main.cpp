#include <iostream>
#include "../matrixApp/matrixMainFunctions.cpp"
#include "../matrixLib/matrix.h"
#include "../matrixLib/matrix.cpp"
using namespace std;



int main()
{
    // MATRIX1
    editingSize(&rows1,&columns1, x=1) ;
    double** tab1 = new double *[rows1];
    allocation(tab1);
    //
    // MATRIX2
    editingSize(&rows2,&columns2, x=2);
    double ** tab2 = new double *[rows2];
    allocation(tab2);
    //
    // dodawanie wartosci :
    refillingMatrix(tab1,rows1,columns1);
    refillingMatrix(tab2,rows2,columns2);
    //wyswietlanie wartosci
    displayMatrix(tab1,rows1,columns1,x=1);
    displayMatrix(tab2,rows2,columns2,x=2);

    double** tab3 = new double *[rows1];
    allocation(tab3);

    //dodwanie
    addMatrix(tab1,tab2,rows1,columns1,rows2,columns2);
    displayMatrix(tab3,rows1,columns1);

    delete [] tab1;
    delete [] tab2;



    return 0;
}
#include <iostream>
#include "../matrixApp/include/matrixMainFunctions.h"
#include "../matrixLib/include/matrix.h"
using namespace std;


int main()
{
    int rows1,rows2;
    int columns1, columns2;
    int x;


    // MATRIX1
    editingSize(&rows1,&columns1, x=1) ;
    double** tab1 = new double *[rows1];
    allocation(tab1,rows1,columns1);
    //
    // MATRIX2
    editingSize(&rows2,&columns2, x=2);
    double ** tab2 = new double *[rows2];
    allocation(tab2,rows2,columns2);
    //
    // uzupelnianie macierzy :
    refillingMatrix(tab1,rows1,columns1);
    refillingMatrix(tab2,rows2,columns2);

    //wyswietlanie wartosci
    displayMatrix(tab1,rows1,columns1,x=1);
    displayMatrix(tab2,rows2,columns2,x=2);


///////////////////////////////////////////////////////////////////
    addMatrix(tab1,tab2,rows1,columns1,x);

    delete [] tab1;
    delete [] tab2;



    return 0;
}
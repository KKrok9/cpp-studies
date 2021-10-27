#include <iostream>
#include "../include/matrix.h"

using namespace std;

double addMatrix(double **tab1, double **tab2, int rows1, int columns1, int x) {

    double** tab3 = new double *[rows1];
    allocation(tab3,rows1,columns1);

    for (int i = 0; i < rows1; i++) {

        for (int j = 0; j < columns1; j++) {

            tab3[i][j]=tab1[i][j]+tab2[i][j] ;

        }
    }
    displayMatrix(tab3,rows1,columns1,x=3);
    return **tab3;
}
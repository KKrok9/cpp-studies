#include <iostream>
#include "matrix.h"
#include "../matrixApp/main.cpp"

double addMatrix(double **tab1, double **tab2, int rows1 , int columns1 , int rows2 , int columns2)
{

    for(int i = 0 ; i < rows1; i++) {
        for (int j = 0; j < columns1; j++)
        {
            tab3[i][j] = tab1[i][j]+tab2[i][j];
        }
       return **tab3;

    }

}



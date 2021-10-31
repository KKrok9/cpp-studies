
#ifndef MAIN_CPP_MATRIX_H
#define MAIN_CPP_MATRIX_H

double addMatrix(double **tab1, double **tab2, int rows1, int columns1);
int addMatrix(int **tab1, int **tab2, int rows1, int columns1);

double subtractMatrix(double **tab1, double **tab2, int rows1, int columns1);
int subtractMatrix(int **tab1, int **tab2, int rows1, int columns1);

double multiplyByScalar(double **tab1,int rows1, int columns1,double *scalar) ;
double multiplyByScalar(int **tab1,int rows1, int columns1,int *scalar) ;

double multiplyMatrix(double **tab1, double **tab2,int rows1, int rows2, int columns2);
double multiplyMatrix(int **tab1, int **tab2,int rows1, int rows2, int columns2);

double transpozeMatrix(double **tab1,int rows1,int columns1);
int transpozeMatrix(int **tab1,int rows1,int columns1);

double powerMatrix(double **tab1, int rows1,int rows2, int columns1,int *exponent);
int powerMatrix(int **tab1, int rows1,int rows2, int columns1,int *exponent);

void helperForDouble(double **tab1, double **helpTab, int rows1,int columns1, int n);
void helperForInt(double **tab1, double **helpTab, int rows1,int columns1, int n);

double determinantMatrix(double **tab1, int rows1,int columns1);
int determinantMatrix(int **tab1, int rows1,int columns1);

bool matrixIsDiagonalDouble (double **tab1, int rows1, int columns1);
bool matrixIsDiagonalInt (int **tab1, int rows1, int columns1);

void swap(int &a, int &b);


double sortRow(double *arr, int columns1);
int sortRow(int *arr, int columns1);

double sortRowInMatrix(double **tab1, int rows1, int columns1);
int sortRowInMatrix(int **tab1, int rows1, int columns1);


#endif //MAIN_CPP_MATRIX_H

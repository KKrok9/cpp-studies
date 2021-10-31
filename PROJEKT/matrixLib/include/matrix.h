
#ifndef MAIN_CPP_MATRIX_H
#define MAIN_CPP_MATRIX_H

double addMatrix(double **tab1, double **tab2, int rows1, int columns1);
int addMatrix(int **tab11, int **tab22, int rows1, int columns1);

double subtractMatrix(double **tab1, double **tab2, int rows1, int columns1);
int subtractMatrix(int **tab11, int **tab22, int rows1, int columns1);

double multiplyByScalar(double **tab1,int rows1, int columns1,double *scalar) ;
int multiplyByScalar(int **tab11,int rows1, int columns1,double *scalar);

double multiplyMatrix(double **tab1, double **tab2,int rows1, int rows2, int columns2);
int multiplyMatrix(int **tab11, int **tab22,int rows1, int rows2, int columns2);

double transpozeMatrix(double **tab1,int rows1,int columns1);
int transpozeMatrix(int **tab11,int rows1,int columns1);

double powerMatrix(double **tab1, int rows1,int rows2, int columns1,int *exponent);
int powerMatrix(int **tab11, int rows1,int rows2, int columns1,int *exponent);

void helperForDouble(double **tab1, double **helpTab, int rows1,int columns1, int n);
void helperForInt(int **tab11, int **helpTab, int rows1,int columns1, int n);

double determinantMatrix(double **tab1, int rows1,int columns1);
int determinantMatrix(int **tab11, int rows1,int columns1);

bool matrixIsDiagonal (double **tab1, int rows1, int columns1);
bool matrixIsDiagonal (int **tab11, int rows1, int columns1);

void swap(int &a, int &b);
void swap (double &c, double &d);

double sortRow(double *arr2, int columns1);
int sortRow(int *arr1, int columns1);

double sortRowInMatrix(double **tab1, int rows1, int columns1);
int sortRowInMatrix(int **tab11, int rows1, int columns1);


#endif //MAIN_CPP_MATRIX_H

#include <iostream>
using namespace std;

int rows1, columns1 ;
int rows2,columns2;
int i ,j , x; // var needed for some base operations like loops etc

void editingSize(int &rows1, int &columns1, int x = 1)
{
    // macierz 1
    cout << "Podaj ilosc wierszy macierzy "<< x <<endl;
    cin >> rows1;

    cout << "Podaj ilosc kolumn macierzy "<< x << endl;
    cin >> columns1;
    // trzeba dodac zabezpieczenie przed podaniem np wyrazu zamiast konkretnej liczby

}

void allocation(int **tab1)
{
    for(int i = 0; i < rows1; ++i)
    {
        tab1[i] = new int[columns1];
    }
}
void refillingMatrix(int **tab1, int rows1, int columns1)
{
    cout << "Dodaj wartosci do odpowiednich miejsc w macierzy :"<< endl;
    for(int i = 0 ; i < rows1 ; i++)
    {
        for(j=0 ; j < columns1 ; j++)

        {
            cout << "["<< i+1 << "]" << "[" << j+1 << "]" << endl;
            cin >> tab1[i][j];
        }
    }

}
void displayMatrix(int **tab1, int rows1, int columns1, int x = 1) {
    cout << "Macierz " << x << " wyglada nastepujaco :"<<endl;
    for (i = 0; i < rows1; i++)
    {
        for(j = 0 ; j < columns1 ; j++)
        {
            cout <<" "<< tab1[i][j] ;
        }
        cout << endl ;
    }


}

int main()
{
    // MATRIX1
    editingSize(rows1,columns1, x=1) ;
    int** tab1 = new int*[rows1];
    allocation(tab1);
    //
    // MATRIX2
    editingSize(rows2,columns2, x=2);
    int** tab2 = new int*[rows2];
    allocation(tab2);
    //
    // dodawanie wartosci :
    refillingMatrix(tab1,rows1,columns1);
    refillingMatrix(tab2,rows2,columns2);
    //wyswietlanie wartosci
    displayMatrix(tab1,rows1,columns1,x=1);
    displayMatrix(tab2,rows2,columns2,x=2);

    delete [] tab1;
    delete [] tab2;
    return 0;
}
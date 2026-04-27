#include<iostream>
#include<iomanip>
#include"MyLib.h"
using namespace std;

void FillMatrixWithRandomNumbers(int arr1[3][3], short Rows, short Cols)
{
    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            arr1[i][j] = MyLib::RandomNumber(1, 10);

        }
    }
}



void PrintMiddleRows(int arr1[3][3], short Rows, short Cols)
{
    short MiddleRow = Rows / 2;
    for (int j = 0; j < Cols; j++)
    {
        cout << setw(3); printf("%0*d", 2, arr1[MiddleRow][j]); cout << "    ";
    }
    cout << endl;


}

void PrintMiddleCols(int arr1[3][3], short Rows, short Cols)
{
    short MiddleCols = Cols / 2;

    for (int j = 0; j < Cols; j++)
    {
        cout << setw(3); printf("%0*d", 2, arr1[j][MiddleCols]); cout << "    ";
    }
    cout << endl;

}

void PrintMatrix(int arr1[3][3], short Rows, short Cols)
{

    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {

            cout << setw(3); printf("%0*d", 2, arr1[i][j]); cout << "    ";
        }
        cout << endl;
    }
    cout << endl;
}

int main()
{
    srand((unsigned)time(NULL));
    int arr1[3][3], arrRows[3], arrCols[3];

    FillMatrixWithRandomNumbers(arr1, 3, 3);

    cout << "Matrix1:" << endl;
    PrintMatrix(arr1, 3, 3);

    cout << "Middle Row of Matrix1 is:\n";
    PrintMiddleRows(arr1, 3, 3);

    cout << "Middle Cols of Matrix1 is" << endl;

    PrintMiddleCols(arr1, 3, 3);



    return 0;
}

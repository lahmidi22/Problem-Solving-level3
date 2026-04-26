#include<iostream>
#include<iomanip>
#include"MyLib.h"
using namespace std;

void FillMatrixWithRandomNumbers(int arr1[3][3], int arr2[3][3], short Rows, short Cols)
{
    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            arr1[i][j] = MyLib::RandomNumber(1, 10);
            arr2[i][j] = MyLib::RandomNumber(1, 10);
        }
    }
}

void MultiplyTwoMatrix(int arr1[3][3], int arr2[3][3], int arr3[3][3], short Rows, short Cols)
{

    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            arr3[i][j] = arr1[i][j] * arr2[i][j];

        }
    }
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
    int arr1[3][3], arr2[3][3], arr3[3][3];

    FillMatrixWithRandomNumbers(arr1, arr2, 3, 3);

    cout << "Matrix1:" << endl;
    PrintMatrix(arr1, 3, 3);

    cout << "Matrix2:" << endl;
    PrintMatrix(arr2, 3, 3);

    MultiplyTwoMatrix(arr1, arr2, arr3, 3, 3);

    cout << "Results:" << endl;
    PrintMatrix(arr3, 3, 3);



    return 0;
}

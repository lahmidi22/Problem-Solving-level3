#include<iostream>
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



int SumOfMatrix(int arr1[3][3], short Rows, short Cols)
{
    short Sum = 0;
    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            Sum += arr1[i][j];
        }
    }
    return Sum;
}

bool AreEqualMatrices(int arr1[3][3], int arr2[3][3], short Rows, short Cols)
{

    return (SumOfMatrix(arr1, Rows, Cols) == SumOfMatrix(arr2, Rows, Cols));

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
    int arr1[3][3], arr2[3][3];

    FillMatrixWithRandomNumbers(arr1, 3, 3);

    cout << "Matrix1:" << endl;
    PrintMatrix(arr1, 3, 3);


    FillMatrixWithRandomNumbers(arr2, 3, 3);

    cout << "Matrix2: " << endl;
    PrintMatrix(arr2, 3, 3);

    if (AreEqualMatrices(arr1, arr2, 3, 3))
    {
        cout << "\nYes: both matrices are equal\n";
    }
    else
    {
        cout << "\nNo: matrices are NOT equal" << endl;
    }



    return 0;
}

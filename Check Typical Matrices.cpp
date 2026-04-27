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




bool AreTypicalMatrices(int arr1[3][3], int arr2[3][3], short Rows, short Cols)
{

    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            if (arr1[i][j] != arr2[i][j])
            {
                return false;
            }
        }
    }
    return true;

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

    if (AreTypicalMatrices(arr1, arr2, 3, 3))
    {
        cout << "\nYes: both matrices are Typical\n";
    }
    else
    {
        cout << "\nNo: matrices are NOT Typical" << endl;
    }



    return 0;
}

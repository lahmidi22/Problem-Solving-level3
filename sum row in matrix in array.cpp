#include<iostream>
#include<iomanip>
#include"MyLib.h"
using namespace std;

void FillMatrixWithRandomNumbers(int Arr[3][3], short Rows, short Cols)
{


    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            Arr[i][j] = MyLib::RandomNumber(1, 100);
        }
    }
}

void OutPutMessage()
{
    cout << "The follwing is a 3x3 random matrix: \n";
}
void OutPutMessage2()
{
    cout << "The sum of each row in the matrix\n";
}
void PrintMatrix(int Arr[3][3], short Rows, short Cols)
{
    OutPutMessage();

    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {

            cout << setw(3) << Arr[i][j] << "    ";

        }
        cout << endl;
    }
}

int RowSum(int Arr[3][3], short NumberRow, short Cols)
{

    int Sum = 0;
    for (int j = 0; j < Cols; j++)
    {
        Sum += Arr[NumberRow][j];
    }
    return Sum;
}

void SumOfEachRowInTheMatrixIn_Array(int Arr[3][3], int arr[3], short Rows, short Cols)
{
    for (int i = 0; i < Rows; i++)
    {
        arr[i] = RowSum(Arr, i, Cols);
    }
}
void PrintSumOfEachRowInTheMatrixIn_Array(int arr[3], short Length)
{
    OutPutMessage2();
    for (int i = 0; i <= Length - 1; i++)
    {
        cout << "Row " << i + 1 << "sum = " << arr[i] << endl;
    }

}


void StartProgram()
{
    srand((unsigned)time(NULL));
    int Arr[3][3];
    int arr[3];


    FillMatrixWithRandomNumbers(Arr, 3, 3);
    PrintMatrix(Arr, 3, 3);

    SumOfEachRowInTheMatrixIn_Array(Arr, arr, 3, 3);
    PrintSumOfEachRowInTheMatrixIn_Array(arr, 3);
}

int main()
{
    StartProgram();

    return 0;
}



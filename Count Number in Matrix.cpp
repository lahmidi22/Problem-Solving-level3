#include<iostream>
#include<iomanip>
#include"MyLib.h"
using namespace std;

void FillMatrixWithRandomNumbers(short arr1[3][3], short Rows, short Cols)
{
    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            arr1[i][j] = MyLib::RandomNumber(1, 10);

        }
    }
}


short ReadNumber(short& Number)
{

    cout << "Please enter the number to count i matrix: ";
    cin >> Number;

    return Number;

}

short CountGivenNumberINMatrix(short arr1[3][3], short Rows, short Cols, short Number)
{
    short CountNumber = 0;
    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            if (arr1[i][j] == Number)
            {
                CountNumber++;
            }
        }
    }
    return CountNumber;
}



void PrintMatrix(short arr1[3][3], short Rows, short Cols)
{

    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            cout << setw(3) << arr1[i][j] << "   ";
            //cout << setw(3); printf("%0*d", 2, arr1[i][j]); cout << "    ";
        }
        cout << endl;
    }
    cout << endl;
}

int main()
{
    srand((unsigned)time(NULL));
    short arr1[3][3];

    FillMatrixWithRandomNumbers(arr1, 3, 3);

    cout << "Matrix1:" << endl;
    PrintMatrix(arr1, 3, 3);

    short Number = ReadNumber(Number);

    cout << "\nNumber " << Number << " count in matrix is " << CountGivenNumberINMatrix(arr1, 3, 3, Number) << endl;



    return 0;
}

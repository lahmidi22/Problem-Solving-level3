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
            arr1[i][j] = MyLib::RandomNumber(1, 100);

        }
    }
}

short ReadNumber(short& Number)
{
    cout << "Please Enter the number to look for in matrix? ";
    cin >> Number;

    return Number;
}
bool NumberExistsInMatrix(short arr1[3][3], short Number, short Rows, short Cols)
{

    short counter = 0;

    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            if (arr1[i][j] == Number)
            {

                return true;
            }

        }
    }

    return false;
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


    if (NumberExistsInMatrix(arr1, Number, 3, 3))
    {
        cout << "\nYes : It is there\n";
    }
    else
    {
        cout << "\nNo: It's NOT there\n";
    }


    return 0;
}

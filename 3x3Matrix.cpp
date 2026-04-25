
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
void PrintMatrix(int Arr[3][3], short Rows, short Cols)
{
    OutPutMessage();

    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {

            cout << setw(3) << Arr[i][j] << "  ";

        }
        cout << endl;
    }
}

void StartProgram()
{
    srand((unsigned)time(NULL));
    int Arr[3][3];

    FillMatrixWithRandomNumbers(Arr, 3, 3);
    PrintMatrix(Arr, 3, 3);
}

int main()
{
    StartProgram();

    return 0;
}



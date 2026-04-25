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

int ColsSum(int Arr[3][3], short Rows, short NumberCols)
{

    int Sum = 0;
    for (int j = 0; j < Rows; j++)
    {
        Sum += Arr[j][NumberCols];
    }
    return Sum;
}
void PrintSumOfEachColsInTheMatrix(int Arr[3][3], short Rows, short Cols)
{
    OutPutMessage2();
    for (int i = 0; i <= Rows - 1; i++)
    {
        cout << "Cols " << i + 1 << " sum = " << ColsSum(Arr, Rows, i)/*arr[i]*/ << endl;
    }

}


void StartProgram()
{
    srand((unsigned)time(NULL));
    int Arr[3][3];
   


    FillMatrixWithRandomNumbers(Arr, 3, 3);
    PrintMatrix(Arr, 3, 3);

    
    PrintSumOfEachColsInTheMatrix(Arr, 3, 3);
}

int main()
{
    StartProgram();

    return 0;
}

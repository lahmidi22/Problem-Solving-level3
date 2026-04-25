#include<iostream>


using namespace std;

void FillMatrixWithOrderedNumbers(int Arr[3][3], short Rows, short Cols)
{
    short Counter = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            Counter++;
            Arr[i][j] = Counter;

        }

    }

}

void PrintMatrixWithOrderedNumbers(int Arr[3][3], short Rows, short Cols)
{
    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            cout << Arr[i][j] << "    ";
        }

        cout << endl;
    }
}
int main()
{
    int Arr[3][3];
    cout << "the folowing is 3x3 matrix: " << endl;
    FillMatrixWithOrderedNumbers(Arr, 3, 3);
    PrintMatrixWithOrderedNumbers(Arr, 3, 3);

    return 0;
}

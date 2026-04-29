#include<iostream>
#include<iomanip>

using namespace std;



short CountNumberInMatrix(short arr1[3][3], short NumberCount, short Rows, short Cols)
{

    short counter = 0;

    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            if (arr1[i][j] == NumberCount)
            {
                counter++;
            }
        }
    }

    return counter;
}

bool IsSparseMatrix(short arr1[3][3], short Rows, short Cols)
{
    short MatirixSize = Rows * Cols;
    return (CountNumberInMatrix(arr1, 0, 3, 3) > (MatirixSize / 2));
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
    short arr1[3][3] = { {12,0,10},{10,1,0}, {9,0,0} };


    cout << "Matrix1:" << endl;
    PrintMatrix(arr1, 3, 3);

    if (IsSparseMatrix(arr1, 3, 3))
    {
        cout << "\nYes : It is Sparse\n";
    }
    else
    {
        cout << "\nNo: It's NOT Sparse\n";
    }


    return 0;
}

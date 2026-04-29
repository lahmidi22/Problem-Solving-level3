#include<iostream>
#include<iomanip>

using namespace std;


bool IsScalar(int arr1[3][3], short Rows, short Cols)
{


    short FirstDiagElement = arr1[0][0];

    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            if (i == j && arr1[i][j] != FirstDiagElement)
            {
                return false;
            }

            else if (i != j && arr1[i][j] != 0)
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
            cout << setw(3) << arr1[i][j] << "   ";
            
        }
        cout << endl;
    }
    cout << endl;
}

int main()
{
    srand((unsigned)time(NULL));
    int arr1[3][3] = { {5, 0, 0}, {0, 5 ,0}, {0, 0, 5} };

 

    cout << "Matrix1:" << endl;
    PrintMatrix(arr1, 3, 3);

    if (IsScalar(arr1, 3, 3))
    {
        cout << "\nYes:  matrix is scalar \n";
    }
    else
    {
        cout << "\nNo: matrix is NOT scalar" << endl;
    }



    return 0;
}

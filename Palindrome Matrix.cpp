#include<iostream>
#include<iomanip>

using namespace std;


bool IsPalindromMatrix(short Matrix1[3][3], short Rows, short Cols)
{
    for (int i = 0; i < Rows; i++)
    {

        for (int j = 0; j < Cols / 2; j++)
        {
            if (Matrix1[i][j] != Matrix1[i][Cols - 1 - j])
            {
                return false;
            }
        }

    }
    return true;
}

void PrintMatrix(short Matrix1[3][3], short Rows, short Cols)
{

    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            cout << setw(3) << Matrix1[i][j] << "   ";
            //cout << setw(3); printf("%0*d", 2, arr1[i][j]); cout << "    ";
        }
        cout << endl;
    }
    cout << endl;
}

int main()
{
    srand((unsigned)time(NULL));
    short Matrix1[3][3] = { {1,2,1}, {5,5,5},{7,3,7} };

    cout << "Matrix1:" << endl;
    PrintMatrix(Matrix1, 3, 3);

    if (IsPalindromMatrix(Matrix1, 3, 3))
    {
        cout << "\nMatrix is Palindrome\n";
    }
    else
    {
        cout << "\nMatrix is NOT Palindrome\n";
    }




    return 0;
}

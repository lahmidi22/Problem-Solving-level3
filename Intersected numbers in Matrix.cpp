#include<iostream>
#include<iomanip>

using namespace std;


bool NumberExistsInMatrix(short Matrix2[3][3], short Number, short Rows, short Cols)
{



    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            if (Matrix2[i][j] == Number)
            {

                return true;
            }

        }
    }

    return false;
}


void PrintIntersectedNumbers(short Matrix1[3][3], short Matrix2[3][3], short Rows, short Cols)
{
    short Number = 0;
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            Number = Matrix1[i][j];
            if (NumberExistsInMatrix(Matrix2, Number, 3, 3))
            {
                cout << Number << "     ";
            }

        }
    }

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
    short Matrix1[3][3] = { {77,5,12}, {22,20,1},{1,0,9} },
        Matrix2[3][3] = { {5,80,90,},{22, 77, 1}, {10,8,33} };
    


    cout << "Matrix1:" << endl;
    PrintMatrix(Matrix1, 3, 3);

    cout << "Matrix2:" << endl;
    PrintMatrix(Matrix2, 3, 3);


    cout << "\nIntersected Number are:\n " << endl;
    PrintIntersectedNumbers(Matrix1, Matrix2, 3, 3);



    return 0;
}

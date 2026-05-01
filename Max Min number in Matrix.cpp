#include<iostream>
#include<iomanip>
using namespace std;


short PrintMaxNumbers(short Matrix1[3][3], short Rows, short Cols)
{
    short Max = Matrix1[0][0];
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {

            if (Matrix1[i][j] >= Max)
            {
                Max = Matrix1[i][j];

            }


        }
    }
    return Max;
}
short PrintMinNumber(short Matrix1[3][3], short Rows, short Cols)
{
    short Min = Matrix1[0][0];
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {


            if (Matrix1[i][j] <= Min)
            {

                Min = Matrix1[i][j];


            }
        }

    }
    return Min;


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
    short Matrix1[3][3] = { {77,5,12}, {22,20,6},{14,3,9} };
    
    cout << "Matrix1:" << endl;
    PrintMatrix(Matrix1, 3, 3);


    cout << "\nMin Number is :\n ";
    cout << PrintMinNumber(Matrix1, 3, 3);

    cout << "\nMax Number is :\n ";
    cout << PrintMaxNumbers(Matrix1, 3, 3);



    return 0;
}

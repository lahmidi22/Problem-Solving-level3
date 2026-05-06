#include<iostream>
using namespace std;



void PrintFibonacciSeriesUsingRecursion(short Number, short Prev1, short  Prev2)
{
    short FibNumber = 0;

    if (Number > 0)
    {


        FibNumber = Prev2 + Prev1;
        Prev1 = Prev2;
        Prev2 = FibNumber;

        cout << " | " << FibNumber << " | ";
        PrintFibonacciSeriesUsingRecursion(Number - 1, Prev1, Prev2);

    }


}


int main()
{


    PrintFibonacciSeriesUsingRecursion(10, 1, 0);

    return 0;
}

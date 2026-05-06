#include<iostream>
using namespace std;


void FibonacciSeries(short Number)
{
    short Sum, Prev1, Prev2;
    Prev1 = 1;
    Prev2 = 0;

    short i = 1;
    while (i <= Number)
    {
        cout << " | " << Prev2 + Prev1 << " | ";

        Sum = Prev2 + Prev1;

        Prev1 = Prev2;
        Prev2 = Sum;


        i++;
    }


}


int main()
{


    FibonacciSeries(10);

    return 0;
}

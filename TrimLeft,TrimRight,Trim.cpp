#include<iostream>
#include<string>
using namespace std;

string TrimLeft(string Text)
{

    for (short i = 0; Text.length(); i++)
    {
        if (Text[i] != ' ')
        {
            return  Text.substr(i, Text.length() - i);
        }
    }
    return "";
}

string TrimRight(string Text)
{
    for (short i = Text.length(); i >= 0; i--)
    {
        if (Text[i] != ' ')
        {
            return Text.substr(0, i + 1);
        }
    }
    return "";
}

string Trim(string Text)
{
    return TrimLeft(TrimRight(Text));
}
int main()
{

    string Text = "    Ahmed lahmidi    ";

    cout << "\nString        = " << Text;
    cout << "\nTrim left   = " << TrimLeft(Text);
    cout << "\nTrim Right  = " << TrimRight(Text);
    cout << "\nTrim All    = " << Trim(Text);

    return 0;
}

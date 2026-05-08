#include<iostream>
#include<string>
#include<cctype>
using namespace std;

string ReadText()
{
    string Text;
    cout << "Please enter your text? " << endl;
    getline(cin, Text);

    return Text;

}

string UpperAllString(string Text)
{
    for (short i = 0; i < Text.length(); i++)
    {
        Text[i] = toupper(Text[i]);
    }

    return Text;
}

string LowerAllString(string Text)
{
    for (short i = 0; i < Text.length(); i++)
    {
        Text[i] = tolower(Text[i]);
    }

    return Text;
}

int main()
{
    string Text = ReadText();

    cout << "\nString after Upper:\n ";
    Text = UpperAllString(Text);
    cout << Text << endl;

    cout << "\nString after Lower:\n ";
    Text = LowerAllString(Text);
    cout << Text << endl;

    return 0;
}

#include<iostream>
#include<string>
#include<cctype>
using namespace std;

string ReadText()
{
    string Text;
    cout << "Please enter a Character?" << endl;
    getline(cin, Text);

    return Text;

}
short CountCapitalLetters(string Text)
{
    short CapitalLetters = 0;

    for (short i = 0; i < Text.length(); i++)
    {
        if (isupper(Text[i]))
        {
            CapitalLetters++;
        }
    }
    return CapitalLetters;
}

short CountSmallLetters(string Text)
{
    short SmallLetters = 0;

    for (short i = 0; i < Text.length(); i++)
    {
        if (islower(Text[i]))
        {
            SmallLetters++;

        }
    }

    return SmallLetters;
}
int main()
{
    string Text = ReadText();

    cout << "\nString Length = " << Text.length();

    cout << "\nCapital Letters Count = " << CountCapitalLetters(Text);

    cout << "\nSmall Letters Count = " << CountSmallLetters(Text);


    return 0;
}

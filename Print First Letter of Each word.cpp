#include<iostream>
#include<string>

using namespace std;

string ReadText()
{
    string Text;

    cout << "Please enter your text? " << endl;
    getline(cin, Text);

    return Text;

}


void PrintFirstLetterOfEachWord(string Text)
{
    cout << "\nFrist letters of this string:\n";
    bool IsFirstLetter = true;

    for (short i = 0; i < Text.length(); i++)
    {
        if (Text[i] != ' ' && IsFirstLetter)
        {
            cout << Text[i] << endl;
        }

        IsFirstLetter = (Text[i] == ' ' ? true : false);
    }

}

int main()
{

    PrintFirstLetterOfEachWord(ReadText());

    return 0;
}

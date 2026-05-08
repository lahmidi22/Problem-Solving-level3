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


string UpperFirstLetterOfEachWord(string Text)
{


    bool IsFirstLetter = true;

    for (short i = 0; i < Text.length(); i++)
    {
        if (Text[i] != ' ' && IsFirstLetter)
        {
            Text[i] = toupper(Text[i]);
        }

        IsFirstLetter = (Text[i] == ' ' ? true : false);

    }

    return Text;


}

int main()
{
    string Text = ReadText();

    cout << "\nString after conversion:\n ";

    Text = UpperFirstLetterOfEachWord(Text);

    cout << Text << endl;

    return 0;
}

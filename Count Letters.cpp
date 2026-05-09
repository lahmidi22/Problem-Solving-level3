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

char ReadCharacter()
{
    char Character;
    cout << "Please Enter a Character?" << endl;
    cin >> Character;

    return Character;
}

short CountCharacter(string Text, char Character)
{
    short CountChar = 0;

    for (short i = 0; i < Text.length(); i++)
    {
        if (Text[i] == Character)
        {
            CountChar++;
        }
    }

    return CountChar;
}
int main()
{
    string Text = ReadText();
    char Character = ReadCharacter();

    cout << "\nLetter '" << Character << "' Count = " << CountCharacter(Text, Character);


    return 0;
}

#include<iostream>
#include<string>
#include<cctype>
using namespace std;

string ReadText()
{
    string Text;
    cout << "Please enter your string?" << endl;
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

short CountCharacter(string Text, char Character, bool MatchCase = true)
{
    short CountChar = 0;

    for (short i = 0; i < Text.length(); i++)
    {
        if (MatchCase)
        {
            if (Text[i] == Character)
            {
                CountChar++;
            }

        }
        else
        {
            if (tolower(Text[i]) == tolower(Character))
            {
                CountChar++;
            }

        }
    }

    return CountChar;
}
char InvertLetterCase(char Character)
{
    return isupper(Character) ? tolower(Character) : toupper(Character);
}

int main()
{
    string Text = ReadText();
    char Character = ReadCharacter();

    cout << "\nLetter '" << Character << "' Count = " << CountCharacter(Text, Character);


    cout << "\nLetter '" << Character << " Or " << "'" << InvertLetterCase(Character) << "'" << " Count = "
        << CountCharacter(Text, Character, false);

    return 0;
}

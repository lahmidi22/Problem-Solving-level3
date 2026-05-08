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

char InvertLetterCase(char Character)
{
    return isupper(Character) ? tolower(Character) : toupper(Character);
}
string InvertAllLetterCase(string Text)
{
    for (short i = 0; i < Text.length(); i++)
    {
        Text[i] = InvertLetterCase(Text[i]);
    }
    return Text;
}
int main()
{
    string Text = ReadText();

    cout << "string after inverting All letters case:" << endl;
    Text = InvertAllLetterCase(Text);
    cout << Text << endl;


    return 0;
}

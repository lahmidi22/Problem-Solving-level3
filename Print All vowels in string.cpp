#include<iostream>
#include<string>
#include<cctype>
using namespace std;

string ReadText()
{
    string Text;
    cout << "Please Enter your string?" << endl;
    getline(cin, Text);

    return Text;
}


bool IsVowels(char Character)
{
    Character = tolower(Character);

    return ((Character == 'a') || (Character == 'e') || (Character == 'i') || (Character == 'o') || (Character == 'u'));

}

void PrintVowelLetters(string Text)
{
    cout << "\nVowels in string are :";

    for (short i = 0; i < Text.length(); i++)
    {
        if (IsVowels(Text[i]))
        {
            cout << Text[i] << "    ";
        }
    }
}
int main()
{
    string Text = ReadText();

    PrintVowelLetters(Text);



    return 0;
}

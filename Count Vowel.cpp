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
short CountVowels(string Text)
{
    short Count = 0;

    for (short i = 0; i < Text.length(); i++)
    {
        if (IsVowels(Text[i]))
        {
            Count++;
        }
    }
    return Count;
}

int main()
{
    string Text = ReadText();
   
    cout << "\nNumber of vowels is: " << CountVowels(Text) << endl;

    return 0;
}

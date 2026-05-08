#include<iostream>
#include<string>
#include<cctype>
using namespace std;

char ReadText()
{
    char Character;
    cout << "Please enter a Character?" << endl;
    cin >> Character;

    return Character;

}


char InvertLetterCase(char Character)
{
    return isupper(Character) ? tolower(Character) : toupper(Character);
}
int main()
{
    char Character = ReadText();

    cout << "char after inverting case:" << endl;
    Character = InvertLetterCase(Character);
    cout << Character << endl;


    return 0;
}

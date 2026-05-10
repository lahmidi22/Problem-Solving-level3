#include<iostream>
#include<string>
#include<cctype>
using namespace std;


char ReadCharacter()
{
    char Character;
    cout << "Please Enter a Character?" << endl;
    cin >> Character;

    return Character;
}

bool IsVowels(char Character)
{
    Character = tolower(Character);

    return ((Character == 'a') || (Character == 'e') || (Character == 'i') || (Character == 'o') || (Character == 'u'));

}


int main()
{

    char Character = ReadCharacter();

    if (IsVowels(Character))
    {
        cout << "\nYES Letter '" << Character << "' is vowel\n";
    }
    else
    {
        cout << "\nNO Letter '" << Character << "' is NOT vowel\n";
    }

    return 0;
}

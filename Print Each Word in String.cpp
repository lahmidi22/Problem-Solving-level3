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


void PrintEachWordInString(string Text)
{
    string dilem = " ";
    cout << "Your string words are:\n";
    short Pos = 0;
    string sWord;

    while ((Pos = Text.find(dilem)) != std::string::npos)
    {
        sWord = Text.substr(0, Pos);

        if (sWord != "")
        {
            cout << sWord << endl;
        }

        Text.erase(0, Pos + dilem.length());

    }
    if (Text != "")
    {
        cout << Text << endl;
    }
}


int main()
{

    PrintEachWordInString(ReadText());

    return 0;
}

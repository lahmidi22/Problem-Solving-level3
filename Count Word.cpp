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


short CountWords(string Text)
{
    string dilem = " ";
    cout << "The number of words in your string is:";
    short Count = 0;
    short Pos = 0;
    string sWord;

    while ((Pos = Text.find(dilem)) != std::string::npos)
    {
        sWord = Text.substr(0, Pos);

        if (sWord != "")
        {
            Count++;

        }

        Text.erase(0, Pos + dilem.length());

    }
    if (Text != "")
    {
        Count++;
    }

    return Count;
}


int main()
{

    cout << CountWords(ReadText());

    return 0;
}

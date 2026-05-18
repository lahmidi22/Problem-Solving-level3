#include<iostream>
#include<string>
#include<cctype>
#include<vector>
using namespace std;

string ReadText()
{
    string Text;
    cout << "Please Enter your string?" << endl;
    getline(cin, Text);

    return Text;
}


vector<string> SplitString(string Text, string dilem)
{
    vector<string>vString;
    short Pos = 0;
    string sWord;

    while ((Pos = Text.find(dilem)) != std::string::npos)
    {
        sWord = Text.substr(0, Pos);

        if (sWord != dilem)
        {

            vString.push_back(sWord);

        }

        Text.erase(0, Pos + dilem.length());

    }
    if (Text != "")
    {

        vString.push_back(Text);

    }

    return vString;
}




int main()
{

    vector<string>vString;

    vString = SplitString(ReadText(), " ");

    cout << "Tokens :" << vString.size() << endl;
    for (string& s : vString)
    {
        cout << s << endl;
    }

    return 0;
}

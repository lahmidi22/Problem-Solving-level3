#include <string>
#include <iostream>
using namespace std;

string ReadString()
{
	string S1;
	cout << "Please Enter Your String?\n";
	getline(cin, S1);
	return S1;
}
short  PrintEachWordInString(string S1)
{
	string delim = " "; // delimiter
	cout << "\nNumber of Words: \n\n";
	short pos = 0;
	short Count = 0;
	string sWord; 
	
	while ((pos = S1.find(delim)) != std::string::npos)
	{
		sWord = S1.substr(0, pos); 
		if (sWord != "")
		{
			Count++;
		}
		S1.erase(0, pos + delim.length()); /* erase() until
		positon and move to next word. */
	}
	if (S1 != "")
	{
		cout << Count++ << endl;
	}

	return Count;
}
int main()
{
	cout<<PrintEachWordInString(ReadString());
}
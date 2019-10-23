#include<iostream>
#include<fstream>

using namespace std;

int main()
{
	ifstream SearchFromFile;
	string WordToSearch;
	string WordsInFile;
	int count = 0;
	getline(cin , WordToSearch );
	
	SearchFromFile.open("test.txt");//enter yur filename
	if(SearchFromFile.is_open())
	{
		while(!SearchFromFile.eof())
		{
			getline(SearchFromFile , WordsInFile);
		   if(WordsInFile.find(WordToSearch) != string::npos) // The mainfunction of the program which  search  string::npos is returned if string is not found
			{
				count++;
			}
		}
		
	}
	cout<<count;
	
//	cout<<Temp1;
	SearchFromFile.close();
}

/*string::npos
static const size_t npos = -1;
Maximum value for size_t
npos is a static member constant value with the greatest possible value for an element of type size_t.

This value, when used as the value for a len (or sublen) parameter in string's member functions, means "until the end of the string".

As a return value, it is usually used to indicate no matches.

This constant is defined with a value of -1, which because size_t is an unsigned integral type, 
it is the largest possible representable value for this type. */

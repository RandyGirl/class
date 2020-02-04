#include <iostream>

using namespace std;

bool isAlpha(char c)
{
	return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}
double countSrednoDumi(char* str)
{
	double counterLetter = 0;
	double counterWords = 0;
	cout << str << endl;
	for(int i = 0; str[i] != '\0'; i++)
	{
		if(str[i] != ' ' && str[i] != '.' && str[i] != '!' && str[i] != '?')
		{
			counterLetter++;
		}
		if(str[i] == ' ')
		{
			if(str[i - 1] != ' ' && str[i - 1] != '.' && str[i - 1] != '!' && str[i - 1] != '?' )
			{
				counterWords++;
			}
		}
		if((str[i] == '.' || str[i] == '!' || str[i] == '?') && isAlpha(str[i - 1]))
		{
			counterWords++;
		} 
	}
	cout << "Counter letter is: " << counterLetter << " and counter words is: " << 	counterWords << endl; 
	return counterLetter / counterWords;
}


int main()
{
	char arr[128];
	cin.getline(arr, 128);
	cout << countSrednoDumi(arr) << endl;

	return 0;
}

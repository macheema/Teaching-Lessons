#include<iostream>
using namespace std;
static void characterExample()
{
	char character, Lowervalue, Uppervalue;
	cout << "Enter character you want to check" << endl;
	cin >> character;
	Uppervalue = (character == 'A' || character == 'O' || character == 'I' || character == 'E' || character == 'U');
	Lowervalue = (character == 'a' || character == 'o' || character == 'i' || character == 'e' || character == 'u');
	if (Lowervalue || Uppervalue)
	{
		cout << "Your entered character is VOWEL";
	}//end of if
	else
	{
		cout << "Your entered character is CONSONANT";
	}//end of else
}//end of main

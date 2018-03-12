# include<iostream>
using namespace std;
static void evenOddNumber()
{
	int numb;
	cout << "Enter number you want to test" << endl;
	cin >> numb;
	if (numb % 2 == 0)
	{
		cout << "Your entered number is Even" << endl;
	}//end of if
	else
	{
		cout << "Your entered number is Odd";
	}
}//end of main

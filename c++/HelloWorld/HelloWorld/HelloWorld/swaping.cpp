#include <iostream>
using namespace std;
static void swapping()
{
	int num1, num2;
	cout << "Provide first number" << endl;
	cin >> num1;
	cout << "Now provide second number" << endl;
	cin >> num2;
	cout << "Before swaping, numbers was " << num1 << " & " << num2 << endl;
	num1 = num1 - num2;
	num2 = num1 + num2;
	num1 = num2 - num1;
	cout << "After swaping, numbers are " << num1 << " & " << num2;

}//end of main

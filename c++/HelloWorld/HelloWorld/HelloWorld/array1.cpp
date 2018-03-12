#include <iostream>
using namespace std;
static void sum()
{
	int Sum = 0;
	int i = 0;
	int arr[3];
	for (i = 0; i < 3; i++)
	{
		arr[i] = i;
	}
	for (int j = 0; j < 3; j++)
	{
		Sum = Sum + arr[j];
	}
	cout << Sum << endl;
}

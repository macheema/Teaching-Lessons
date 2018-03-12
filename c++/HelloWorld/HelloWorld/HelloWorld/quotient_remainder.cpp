# include<iostream>
using namespace std;
static void quotientRemainder()
{
	int quotient, remainder, devider, devisor;
	cout << "provide the devisor" << endl;
	cin >> devisor;
	cout << "Now provide the devider" << endl;
	cin >> devider;
	quotient = devisor / devider;
	cout << "Quotient is = " << quotient << endl;
	remainder = devisor%devider;
	cout << "And the Remainder is = " << remainder;

}//end of main

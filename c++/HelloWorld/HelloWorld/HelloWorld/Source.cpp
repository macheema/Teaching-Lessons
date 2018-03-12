#include <iostream>
using namespace std;

//void calculatorApp();
int sum(int num1, int num2);
int sumByAlias(int &num3, int &num4);
int sum(int *a, int *b);

int* sumByValue(int num1, int num2);
void sumProgram();
void arrayWithPointers(int size2d, int size1d);
int main() {
	arrayWithPointers(199, 1000);
}

void arrayWithPointers(int size2d, int size1d) {

	int ** matrix = new int*[size2d];
	for (int index = 0;index < size2d;index++) {
		matrix[index] = new int[size1d];
	}
	int num = 1;
	for (int i = 0;i < size2d;i++) {
		for (int j = 0;j < size1d;j++) {
			matrix[i][j] = num;
			num++;
		}
	}
	for (int i = 0;i < size2d;i++) {
		for (int j = 0;j < size1d;j++) {
			cout << matrix[i][j];
			if (j != (size1d - 1)) {
				cout << " , ";
			}
		}
		cout << endl;
	}

}

int sum(int num1, int num2)
{
	int result = num1 + num2;
	num1 = result;
	num2 = result;
	return result;
}

int sumByAlias(int &num1, int &num2)
{
	int result = num1 + num2;
	num1 = result;
	num2 = result;
	return result;
}

int sum(int *num1, int *num2)
{
	int result = *num1 + *num2;
	*num1 = result;
	*num2 = result;
	return result;
}

int* sumByValue(int num1, int num2)
{
	int result = num1 + num2;
	num1 = result;
	num2 = result;
	return &result;
}
void sumProgram() {
	//Print Values
	int a = 10;
	int b = 20;
	cout << endl << "______________By Value SUM Function_______________ : " << endl;
	cout << "num1 is " << a << endl;
	cout << "num2 is " << b << endl;

	//Sum
	int result;
	result = sum(a, b);
	cout << "Result is : " << result << endl;
	cout << "num1 is " << a << endl;
	cout << "num2 is " << b << endl;

	cout << endl << "______________By ALIAS SUM Function_______________ : " << endl;

	cout << "num1 is " << a << endl;
	cout << "num2 is " << b << endl;
	result = sumByAlias(a, b);
	cout << "Result is : " << result << endl;
	cout << "num1 is " << a << endl;
	cout << "num2 is " << b << endl;

	cout << endl << "______________By Reference SUM Function_______________ : " << endl;

	cout << "num1 is " << a << endl;
	cout << "num2 is " << b << endl;
	result = sum(&a, &b);
	cout << "Result is : " << result << endl;
	cout << "num1 is " << a << endl;
	cout << "num2 is " << b << endl;

	cout << endl << "______________By Valye SUM Function But Return int *_______________ : " << endl;

	cout << "num1 is " << a << endl;
	cout << "num2 is " << b << endl;
	result = *sumByValue(a, b);
	cout << "Result is : " << result << endl;
	cout << "num1 is " << a << endl;
	cout << "num2 is " << b << endl;

	//Print sum result and Values 
}

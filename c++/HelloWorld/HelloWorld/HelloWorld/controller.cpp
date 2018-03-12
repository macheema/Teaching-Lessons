#include <iostream>
#include "character.cpp"
#include "evenodd.cpp"
#include "quotient_remainder.cpp"
#include "swaping.cpp"
#include "array1.cpp"
static void prog1()
{
	int limit;
	std::cout << "Enter a value" << std::endl;
	std::cin >> limit;
	int ans = 1;
	if (limit > 0)
	{
		for (int counter = 1; counter <= limit; counter++)
		{
			ans = ans*counter;


		}//end of loop
		std::cout << "answer is : " << ans << std::endl;

	}//end of if
	else
	{
		std::cout << "Please enter a positive number" << std::endl;
	}
}//end of prog1
static void prog2()
{
	int factorial;
	int ans = 1;
	std::cout << "Enter a number" << std::endl;
	std::cin >> factorial;
	if (factorial > 0)
	{
		for (int counter = 1; ans < factorial; counter++)
		{
			ans = ans*counter;
			if (ans == factorial)
			{
				std::cout << factorial << " is the factorial of : " << counter << std::endl;
			}//end of inner if
			else if (ans > factorial)
			{
				std::cout << factorial << " is'nt the factorial of any number" << std::endl;
				break;
			}//end of inner else

		}//end of loop
	}//end of outer if
	else
	{
		std::cout << "Please enter a positive number" << std::endl;
	}

}

static void controller()
{
	int choice = 0;
	std::cout << "Enter 1 to run prog 1 " << std::endl;
	std::cout << "Enter 2 to run prog 2 " << std::endl;
 std::cout << "Enter 3 to run Character Examle" << std::endl;
 std::cout << "Enter 4 to run Even Odd" << std::endl;
 std::cout << "Enter 5 to run Quotient Remainder Example " << std::endl;
 std::cout << "Enter 6 to run Swapping" << std::endl;
 std::cout << "Enter 7 to run array" << std::endl;
 std::cin >> choice;
	if (choice == 1)
	{
		prog1();
	}
	else if (choice == 2)
	{
		prog2();
	}
	else if (choice == 3)
	{
		characterExample();
	}
	else if (choice == 4)
	{
		evenOddNumber();
	}
	else if (choice == 5)
	{
		quotientRemainder();
	}
	else if (choice == 6)
	{
		swapping();
	}
	else if (choice == 7)
	{
		sum();
	}
	else
	 std::cout << "INVALID command" << std::endl;
}
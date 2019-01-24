//Prime Number Program
//Jeffrey C. Slocum
//jcs307

#include <iostream>
using namespace std;

int main()
{
	
	int user;
	bool prime = true;
	int div;

	//prompt user for input
	cout << endl << endl;
	cout << "**********************************" << endl;
	cout << "**** P R I M E - N U M B E R S ***" << endl;
	cout << "**********************************" << endl;
	cout << endl << endl << "Please enter a number greater than 2 (0 to quit): ";
	cin >> user;

	//make sure the number is greater than 2
	while (user <= 2)
	{
		//exit program if user enters zero
		if (user == 0)
		{
			return 0;
		}

		//if invalid, user will re-enter a number to try again
		cout << "Invalid number. " << endl;
		cout << "Please enter a number greater than 2 (0 to quit): ";
		cin >> user;
	}

	//for loop to test all possible factors of division
	for (int i = 2; i < user; ++i)
	{
		//modulo to test for a remainder
		//cout << "i = " << i << " user % i = " << user % i << endl;
		if (user % i == 0)
		{
			//if remainder of the division equals zero
			//make prime false
			//set div equal to the value of i, which is what it is evenly divisible by
			prime = false;
			div = i;
		}
	}

	
	//tests for value carried by prime variable
	//if true, print value of number entered, then state it is a prime number
	//if false, print value of number entered, then stat that it is not a prime number
	if (prime == true)
	{
		cout << user << " is a Prime number!" << endl;
		return 0;
	}
	else if (prime == false)
	{
		cout << user << " is not a Prime Number" << endl;
		cout << user << " is divisible by " << div << endl;
		return 0;
	}

}
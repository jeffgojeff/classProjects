// Jeffrey C. Slocum
//jcs307

#include <iostream>
#include <fstream>
using namespace std;


double average(int [], const int, int);


int main()
{
	const int SIZE = 100;
	int array1[SIZE];
	double total = 0;
	int totalNumber;
	double averageArray;
	int var1;
	string fileName;
	char answer;

	//determine what the filename is called;
	cout << "[File must contain file extention and be in working directory]" << endl;
	cout << "Enter in a file name: ";
	cin >> fileName;

	//open the file
	fstream fin;
	fin.open(fileName);

	int count = 0;

	//extract data from file, and add data to array
	while (count < SIZE && fin >> array1[count])
	{
		count++;
		var1 = count;
	}

	//close file
	fin.close();

	//call function
	average(array1, SIZE, var1);

	cout << "Would you like to see the numbers in the file? (y/n): ";
	cin >> answer;

	if (answer == 'y' || answer == 'Y')
	{
		cout << endl;

		for (int i = 0; i < var1; i++)
		{
			cout << array1[i] << endl;
		}
		cout << endl;
	}

	return 0;
}



double average(int A[], const int SIZE, int var1)
{
	//declare variables needed
	int totalNumber;
	double averageArray;
	double total;

	//loop to add all data from file together
	for (int i = 0; i < var1; i++)
	{
		total += A[i];
		totalNumber = i + 1;
	}

	//math to produce average
	averageArray = total / totalNumber;
	cout << "Average of numbers in file = " << averageArray << endl;

	//return the computed average
	return averageArray;
}

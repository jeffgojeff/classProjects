#include <iostream>
#include <fstream>
#include <string>
using namespace std;


int wordFinder(string [], int &, string &);


int main()
{
	
	const int SIZE = 100;
	string arr1[SIZE];
	int count = 0;
	string find;

	cout << "Enter in a word to search for: ";
	cin >> find;




	fstream fin;
	fin.open("words.txt");

	while (count < SIZE && fin >> arr1[count])
	{
		count++;
	}

	fin.close();

	wordFinder(arr1, count, find);


	return 0;
}




int wordFinder(string A[], int &count, string &x)
{
	cout << "count = " << count << endl;

	int var1 = 0;

	for (int i = 0; i < count; ++i)
	{
		//cout << "i = " << i << endl;

		if (x == A[i])
		{
		cout << A[i] << " at position " << i << endl;
		var1++;
		}
	}

	//to see if word was found
	if (var1 == 0)
	{
		cout << "-1" << endl;
	}


	return i;
}
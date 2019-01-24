#include <iostream>

using namespace std;

int main()
{
/*
	
	int array[5] = {10,20,30,40,50};
	cout << array[1] << endl;
	cout << "array with: " << array[4,3] << endl;
	cout << "array without: " << array << endl;
	cout << "END"<< endl << endl;

	int array2[5];

	array2[3] = 5;

	cout << array2[3] << endl;
	cout << array2[0] << endl;
	cout << "END" << endl;

	int array3[5] = {0,1,2,3,4};
	int count = 5;
	for (int i = 0; i < count; ++i)
	{
		cout << i << " " << array3[i] << endl;
		cout << "END" << endl << endl;
	}


*/
	int user;

	cout << "enter a number: " << endl;
	cin >> user;

	int array4[user];
	for (int i = 0; i < user; ++i)
	{
		
		array4[i] = i;
		cout << "i = " << i << " // array[" << i << "] = " << array4[i] << endl;


	}







}
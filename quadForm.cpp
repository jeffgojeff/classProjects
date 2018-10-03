//Quadradic Formula
#include <iostream>
//cmath for higher math functions
#include <cmath>
using namespace std;

int main()
{
	//declare variables
	float aVar;
	float bVar;
	float cVar;
	float xPlus;
	float xMinus;
	float var1;
	float root;


	cout << "this is the Quadratic Formula: " << endl;
	cout << "ax^2 + bx + c " << "\n";
	cout << "Let's solve for x. " << endl;

	cout << "What is the value of 'a' ? " << endl;
	cin >> aVar;

	cout << "What is the value of 'b' ? " << endl;
	cin >> bVar;
	

	cout << "What is the value of 'c' ?" << endl;
	cin >> cVar;

	//bVar times itself to square variable
	//var1 is the equation inside the root
	var1 = (bVar * bVar) - (4 * aVar * cVar);
	
	//pass var1 to get root
	root = pow (var1, .5);

	//pass through this for first solution
	xPlus = ((-1 * bVar) + root) / (2 * aVar);

	//pass through for secon solution
	xMinus = ((-1 * bVar) - root) / (2 * aVar);

	cout << endl << "The roots of x are " << xPlus << ", " << xMinus << endl;


	return 0;
}
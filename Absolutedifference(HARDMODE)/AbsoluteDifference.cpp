#include <iostream>

using namespace std;

int a;
int b;
int function(int a, int b); // :)


int main () 
{
	cout << "Enter number 1: ";
	cin >> a;
	cout << "Enter number 2: ";
	cin >> b;
	cout << endl << "Difference " << function(a, b);
}

int function(int a, int b)
{
	//alt 1
	 
	//if (a > b)
	//{
	//	return a - b;
	//}
	//else if (b == a)
	//{
	//	return 0;
	//}
	//else
	//{
	//	return b - a;
	//}

	//alt 2
	 
	//if (a - b < 0)
	//	return -(a - b);
	//else
	//	return a - b;

	//alt 3 - Learn this :)

	return a - b < 0 ? -(a - b) : a - b;
}


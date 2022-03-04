#include <iostream>

using namespace std;

int a;


int main() 
{
	cout << "Enter number: ";
	cin >> a;

	//if (a % 2 == 0)
	//{
	//	cout << a << " is even.";
	//}
	//else
	//{
	//	cout << a << " is odd.";
	//}

	(a % 2 == 0) ? cout << endl << a << " is even" : cout << a << " is odd";

	return 0;
}

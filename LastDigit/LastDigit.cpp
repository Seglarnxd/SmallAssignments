#include <iostream>

using namespace std;

int a;
int lastDigit;

int main() 
{
	cout << "Enter number: ";
	cin >> a;
	lastDigit = a % 10;

	cout << endl << "Last digit in " << a << " is " << lastDigit;

	return 0;
}
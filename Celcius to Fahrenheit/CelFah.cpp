#include <iostream>

using namespace std;

int celsius;
int Fahrenheit;

int main() 
{
	cout << "Enter temp in Celcius: ";
	cin >> celsius;

	Fahrenheit = (9.0 / 5.0) * celsius + 32;

	cout << celsius << " Celsius is equal to " << Fahrenheit << " Fahrenheit";

	return 0;
}
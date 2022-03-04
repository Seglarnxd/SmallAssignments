#include <iostream>

using namespace std;

bool aProg(int num[], int size)
{
	int d{};

	for (size_t i = 1; i < size; i++)
	{
		if (num[i] - num[i - 1] != d && i > 1)
		{
			return false;
		}
		d = num[i] - num[i - 1];
	}
	return true;
}

int main()
{
	int num[4];

	cout << "Input first 4 numbers one at a time, start with the smallest number.\n\n";

	for (size_t i = 0; i < size(num); i++)
	{
		cout << "Enter number " << i + 1 << ": ";
		cin >> num[i];
	}

	if (aProg(num, size(num)))
	{
		cout << "\nTrue.";
	}
	else
	{
		cout << "\nFalse.";
	}
	return 0;
}
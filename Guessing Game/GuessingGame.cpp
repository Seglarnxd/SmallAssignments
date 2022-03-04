#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	char again;

	do
	{
	int tries = 0, guess = -1;
	

	srand(time(0));
	int num = 0 + rand() % (10 + 1);
	//cout << "Random num by CPU is " << num << endl;
	cout << "Guess a number between 0 and 10: ";

	
	while (guess != num)
	{
		cin >> guess;
		if (cin.fail())
		{
			cin.clear();
			cin.ignore();
			cout << "Guess a number between 0 and 10: ";
		}
		else
		{
			tries++;
			if (guess > num)
			{
				cout << guess << " is too high, try again.\n\n";
			}
			else
			{
				cout << guess << " is too low, try again.\n\n";
			}
		}
	}
	cout << num << " is correct, It took " << tries << " tries.\n\n";
	

	cout << "Another round? Press R and then Enter to play again.\n\n";
	cin >> again;

	} while (toupper(again) == 'R');

	return 0;
}
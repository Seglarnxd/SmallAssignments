
#include <iostream>

using namespace std;

int number1;
int number2;
int absolute(int a, int b);

int main()
{
    cout << "Enter number 1: ";
    cin >> number1;
    cout << "Enter number 2: ";
    cin >> number2;
    cout << absolute(number1, number2);
}

int absolute(int number1, int number2) 
{
    return abs(number1 - number2);
}


#include<iostream>

using namespace std;

void ref(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

void pointer(int* a, int* b) 
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main()
{
	int a = 153;
	int	b = 326;
	cout << a << " " << b << endl;
	pointer(&a, &b);
	cout << a << " " << b << endl;
	return 0;
}


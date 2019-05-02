#include<iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n / 100; i++)
	{
		cout << 'B';
	}
	n %= 100;
	for (int i = 0; i < n / 10; i++)
	{
		cout << 'S';
	}
	n %= 10;
	for (int i = 1; i <= n; i++)
	{
		cout << i;
	}
	system("pause");
	return 0;
}
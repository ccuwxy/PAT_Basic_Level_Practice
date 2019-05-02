#include<iostream>
using namespace std;
int main()
{
	int n, m;
	int num[201] = { 0 };
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		cin >> num[i];
	}
	int temp;
	m = m % n;
	for (int i = n - 1; i >= 0; i--)
	{
		num[i + m] = num[i];
	}
	for (int i = 0; i < m; i++)
	{
		num[i] = num[n + i];
	}
	for (int i = 0; i < n; i++)
	{
		cout << num[i];
		if (i != n - 1)
		{
			cout << ' ';
		}
	}
	system("pause");
	return 0;
}
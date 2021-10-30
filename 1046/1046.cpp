#include<iostream>

using namespace std;
int main()
{
	int n;
	int a1, a2, b1, b2;
	int a = 0, b = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a1 >> a2 >> b1 >> b2;
		if (a2 == a1 + b1 && a2 != b2)
			b++;
		if (b2 == a1 + b1 && a2 != b2)
			a++;
	}
	cout << a << " " << b;
	return 0;
}
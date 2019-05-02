#include<iostream>
using namespace std;
int main()
{
	long long a, b, c;
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> a;
		cin >> b;
		cin >> c;
		printf("Case #%d: %s\n", i, (a + b > c) ? "true" : "false");

	}
	system("pause");
	return 0;
}
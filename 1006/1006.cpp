//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int n;
//	cin >> n;
//	for (int i = 0; i < n / 100; i++)
//	{
//		cout << 'b';
//	}
//	n %= 100;
//	for (int i = 0; i < n / 10; i++)
//	{
//		cout << 's';
//	}
//	n %= 10;
//	for (int i = 1; i <= n; i++)
//	{
//		cout << i;
//	}
//	system("pause");
//	return 0;
//}

#include<iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	
	int b = n / 100;
	int s = n % 100 / 10;
	int g = n % 10;
	
	while (b--)
		cout << 'B';
	while (s--)
		cout << 'S';
	for (int i = 1; i <= g; i++)
		cout << i;
	
	return 0;
}
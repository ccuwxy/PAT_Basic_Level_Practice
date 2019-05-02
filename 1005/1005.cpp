//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int n, t;
//	cin >> n;
//	int tem;
//	int temp[101] = { 0 };
//	for (int i = 0; i < n; i++)
//	{
//		cin >> tem;
//		temp[tem] = 1;
//	}
//	for (int i = 100; i >= 0; i--)
//	{
//		if (temp[i])
//		{
//			t = i;
//			while (t != 1)
//			{
//				if (t % 2 == 0)
//				{
//					t /= 2;
//				}
//				else
//				{
//					t = (3 * t + 1) / 2;
//				}
//				if (t < 101)
//					temp[t] = 0;
//			}
//		}
//	}
//	int te = 0;
//	for (int i = 100; i >= 0; i--)
//	{
//		if (temp[i])
//		{
//			if (te == 0)
//			{
//				cout << i;
//				te = 1;
//			}
//			else
//				cout << ' ' << i;
//		}
//	}
//
//	system("pause");
//	return 0;
//}


#include<iostream>
using namespace std;

int main()
{
	int n, t;
	cin >> n;
	int *tem = new int[n] {0};
	int temp[101] = { 0 };
	for (int i = 0; i < n; i++)
	{
		cin >> tem[i];
		temp[tem[i]] = 1;
	}
	for (int i = 0; i < n; i++)
	{
		t = tem[i];
		while (t != 1)
		{
			if (t % 2 == 0)
			{
				t /= 2;
			}
			else
			{
				t = (3 * t + 1) / 2;
			}
			if (t < 101)
				temp[t] = 0;
		}
	}
	int te = 0;
	for (int i = 100; i >= 0; i--)
	{
		if (temp[i] != 0)
		{
			if (te == 0)
			{
				cout << i;
				te = 1;
			}
			else
				cout << ' ' << i;
		}
	}

	delete[] tem;
	system("pause");
	return 0;
}
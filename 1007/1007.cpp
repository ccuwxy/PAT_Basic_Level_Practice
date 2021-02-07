#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int N, count = 0;
	int temp = 0;
	cin >> N;
	int* nums = new int[N+1]{ 0 };
	int k = 0;
	for (int i = 2; i <= N; i++)
	{
		for (int j = 2; j <= sqrt(i); j++)
		{
			if (i % j == 0)
			{
				temp = 1;
				break;
			}
		}
		if (temp == 0)
			nums[i] = 1;
		temp = 0;
	}
	for (int i = 2; i <= N-2; i++)
	{
		if (nums[i] == 1 && nums[i + 2] == 1)
			count++;
	}
	cout << count;
	
	delete []nums;
	return 0;
}

//#include<iostream>
//#include<math.h>
//using namespace std;
//int main()
//{
//	int n;
//	cin >> n;
//	int temp = 0;
//	int* num = new int[n] {0};
//	int k = 0;
//	for (int i = 2; i <= n; i++)
//	{
//		for (int j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				temp = 1;
//				break;
//			}
//		}
//		if (temp == 0)
//		{
//			num[k++] = i;
//		}
//		temp = 0;
//	}
//	int count = 0;
//	for (int i = 0; num[i + 1] != 0; i++)
//	{
//		if (num[i + 1] - num[i] == 2)
//		{
//			count++;
//		}
//	}
//	cout << count << endl;
//	system("pause");
//	return 0;
//}
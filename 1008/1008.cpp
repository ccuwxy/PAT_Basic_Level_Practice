#include<iostream>
#include<string>
using namespace std;

int main()
{
	int N, M;
	cin >> N >> M;
	int* nums = new int[N];
	for (int i = 0; i < N; i++)
		cin >> nums[i];
	M = M % N;
	int temp;
	for (int i = 0; i < N / 2; i++)
	{
		temp = nums[i];
		nums[i] = nums[N - 1 - i];
		nums[N - 1 - i] = temp;
	}
	
	for (int i = 0; i < M/2; i++)
	{
		temp = nums[i];
		nums[i] = nums[M - 1 - i];
		nums[M - 1 - i] = temp;
	}
	
	for (int i = M; i < (N-M)/2+M; i++)
	{
		temp = nums[i];
		nums[i] = nums[N - 1 - i + M];
		nums[N - 1 - i + M] = temp;
	}
	for (int i = 0; i < N; i++)
	{
		cout << nums[i];
		if (i != N - 1)
			cout << " ";
	}
	delete[] nums;
	return 0;
}

//#include<iostream>
//using namespace std;
//int main()
//{
//	int n, m;
//	int num[201] = { 0 };
//	cin >> n >> m;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> num[i];
//	}
//	int temp;
//	m = m % n;
//	for (int i = n - 1; i >= 0; i--)
//	{
//		num[i + m] = num[i];
//	}
//	for (int i = 0; i < m; i++)
//	{
//		num[i] = num[n + i];
//	}
//	for (int i = 0; i < n; i++)
//	{
//		cout << num[i];
//		if (i != n - 1)
//		{
//			cout << ' ';
//		}
//	}
//	system("pause");
//	return 0;
//}
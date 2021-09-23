#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	long n, p;
	cin >> n >> p;
	int* a = new int[n];
	for (int i = 0; i < n; i++)
		scanf("%d", a + i);
	sort(a, a + n);

	int count = 1;
	long long mp;
	for (int i = 0; i < n; i++)
	{
		mp = a[i] * p;
		int j;
		for (j = i+count; j <n; j++)
		{
			if (a[j] <= mp)
				count = j - i + 1;
			else
				break;
		}
	}
		
	printf("%d" ,count);
	return 0;
}
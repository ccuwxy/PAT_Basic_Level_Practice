#include<iostream>
#include<algorithm>
using namespace std;

bool cmp(int a, int b)
{
	return a > b;
}
int maxx(int num)
{
	int ans=0;
	int a[4] = { 0 };
	int j = 0;
	while (num)
	{
		a[j++] = num % 10;
		num /= 10;
	}
	sort(a, a + 4,cmp);
	for (int i = 0; i < 4; i++)
	{
		ans *= 10;
		ans += a[i];
	}
	return ans;
}
int minn(int num)
{
	int ans = 0;
	int a[4] = { 0 };
	int j = 0;
	while (num)
	{
		a[j++] = num % 10;
		num /= 10;
	}
	sort(a, a + 4);
	for (int i = 0; i < 4; i++)
	{
		ans *= 10;
		ans += a[i];
	}
	return ans;
}
int main()
{
	int N;
	cin >> N;
	int ans = N;
	int max, min;
	while (1)
	{
		max = maxx(ans);
		min = minn(ans);
		ans = max - min;
		printf("%04d - %04d = %04d", max, min, ans);
		if (ans == 0 || ans == 6174)
			break;
		else
			printf("\n");
	}

	return 0;
}
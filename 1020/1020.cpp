#include<iostream>
#include<algorithm>
using namespace std;

struct moon
{
	float total;//ÕýÊý
	float avg;
};
bool cmp(moon a, moon b)
{
	return a.avg > b.avg;
}
int main()
{
	int N, D;
	cin >> N >> D;
	moon *moons = new moon[N];
	float money;
	for (int i = 0; i < N; i++)
	{
		cin >> moons[i].total;
	}
	for (int i = 0; i < N; i++)
	{
		cin >> money;
		moons[i].avg = money / moons[i].total;
	}
	sort(moons, moons + N,cmp);
	float maxMoney = 0;

	for (int i = 0; i < N && D>0; i++)
	{
		if (moons[i].total < D)
		{
			maxMoney += moons[i].total * moons[i].avg;
			D -= moons[i].total;
		}
		else
		{
			maxMoney += D * moons[i].avg;
			D -= D;
		}
	}
	printf("%.2f", maxMoney);
	return 0;
}
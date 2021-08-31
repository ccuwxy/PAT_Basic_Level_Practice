#include<iostream>
#include<algorithm>
using namespace std;

struct stu
{
	int i;
	int l1;
	int l2;
	int num;
};
bool cmp1(stu a, stu b)
{
	if (a.l1 == b.l1)
		return a.i < b.i;
	return a.l1 < b.l1;
}

bool cmp2(stu a, stu b)
{
	return a.i < b.i;
}
int main()
{

	int t, n;
	cin >> t;
	struct stu* stus;
	while (t--)
	{
		int num = 1;
		cin >> n;
		stus = (struct stu*)malloc(n * sizeof(stu));
		for (int i = 1; i <= n; i++)
		{
			stus[i - 1].i = i;
			cin >> stus[i - 1].l1;
			cin >> stus[i - 1].l2;
		}
		sort(stus, stus+n, cmp1);

		for (int i = 0; i < n; i++)
		{
			if (num >= stus[i].l1 && num <= stus[i].l2)
				stus[i].num = num++;
			else
				stus[i].num = 0;
		}
		sort(stus, stus + n, cmp2);
		for (int i = 0; i < n; i++)
		{
			
			cout << stus[i].num;
			if (i != n - 1)
				cout << " ";
			else
				cout << endl;
		}
	}
	
	return 0;
}
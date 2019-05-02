#include<iostream>
#include <algorithm>
using namespace std;
struct stu
{
	char name[11];
	char no[11];
	int score;
};
bool cmp(stu a,stu b)
{
	return a.score > b.score;
}
int main()
{
	int n;
	cin >> n;
	stu *s = new stu[n];
	for (int i = 0; i < n; i++)
	{
		cin >> s[i].name >> s[i].no >> s[i].score;
	}
	sort(s, s + n,cmp);
	cout << s[0].name << ' ' << s[0].no  << endl;
	cout << s[n - 1].name << ' ' << s[n - 1].no  << endl;
	delete[] s;
	system("pause");
	return 0;
}
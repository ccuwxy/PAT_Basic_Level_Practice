#include<iostream>
#include<algorithm>
using namespace std;

struct stu
{
	char name[11]; //这里比最大位数大一，也许需要保存文件结尾标记
	char no[11];
	int score;
};

bool cmp(stu a, stu b) // 将stu结构体按照score排序
{
	return a.score < b.score; //从小到大
}
int main()
{
	int n;
	cin >> n;
	stu* stus = new stu[n];
	for (int i = 0; i < n; i++)
	{
		cin >> stus[i].name >> stus[i].no >> stus[i].score;
	}
	sort(stus, stus + n, cmp);

	cout << stus[n - 1].name << " " << stus[n - 1].no << endl;
	cout << stus[0].name << " " << stus[0].no << endl;

	delete[] stus;
	return 0;
}
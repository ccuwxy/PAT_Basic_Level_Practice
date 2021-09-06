#include<iostream>
#include<algorithm>
using namespace std;

struct student
{
	int no;
	int de;
	int cai;
	int sum;
	int clas;
};
bool cmp(student s1, student s2)
{
	if (s1.clas != s2.clas)
		return s1.clas < s2.clas;
	else if (s1.sum != s2.sum)
		return s1.sum > s2.sum;
	else if (s1.de != s2.de)
		return s1.de > s2.de;
	else
		return s1.no < s2.no;
}
int main()
{
	int n, l, h;
	cin >> n >> l >> h;
	student *stu = new student[n];
	int count = n;
	for (int i = 0; i < n; i++)
	{
		cin >> stu[i].no >> stu[i].de >> stu[i].cai;
		stu[i].sum = stu[i].de + stu[i].cai;
		if (stu[i].de < l || stu[i].cai < l)
		{
			stu[i].clas = 5;
			count--;
		}
		else if (stu[i].de >= h && stu[i].cai >= h)
			stu[i].clas = 1;
		else if (stu[i].cai < h && stu[i].de >= h)
			stu[i].clas = 2;
		else if (stu[i].de >= stu[i].cai)
			stu[i].clas = 3;
		else
			stu[i].clas = 4;
	}
	sort(stu, stu + n, cmp);
	cout << count << endl;
	for (int i = 0; i < count; i++)
	{
		printf("%d %d %d", stu[i].no, stu[i].de, stu[i].cai);
		if (i != count - 1)
			printf("\n");
	}
	return 0;
}
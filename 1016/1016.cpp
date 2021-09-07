#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int a, b;
	int da, db;
	cin >> a >> da;
	cin >> b >> db;
	int pa = 0, pb = 0;
	int i = 0, j = 0;
	while (a)
	{
		if (a % 10 == da)
		{

			pa += da*pow(10,i++);
		}
		a /= 10;
	}
	while (b)
	{
		if (b % 10 == db)
		{

			pb += db*pow(10,j++);
		}
		b /= 10;
	}
	cout << pa + pb;
	return 0;
}
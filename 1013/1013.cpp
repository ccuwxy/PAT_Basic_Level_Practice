#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int m, n;
	cin >> m >> n;
	int count = 0;
	int flag = 1;
	int c = 0;
	for (int i = 2; count < n; i++)
	{
		//flag = 1;
		for (int j = 2; j <= sqrt(i); j++)
		{
			flag = 1;
			if (i % j == 0)
			{
				flag = 0;
				break;
			}
		}
		if (flag)
		{
			//cout << i << " ";
			//count++;
			if (++count >= m)
			{
				cout << i;
				if (++c % 10 == 0)
					cout << endl;
				else if(count < n)
					cout << " ";
			}

		}

	}
	return 0;
}
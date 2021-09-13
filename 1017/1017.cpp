#include<iostream>

using namespace std;

int main()
{
	char a[1001];
	char q[1001];
	int b;
	scanf("%s %d", a, &b);
	int before = 0;
	int curr;
	int j = 0;
	for (int i = 0; a[i] != '\0'; i++)
	{
		curr = a[i] - '0' + 10 * before;
		if (curr / b == 0)
		{
			if(i!=0)
				q[j++] = '0';
			before = curr;
			continue;
		}
		q[j++] = curr / b +'0';
		before = curr % b;
	}
	if (j == 0)
		q[j++] = '0';
	q[j] = '\0';
	
	cout << q << " " << before;
	return 0;
}
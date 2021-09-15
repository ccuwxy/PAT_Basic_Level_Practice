#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int a[10];
	for (int i = 0; i < 10; i++)
		cin >> a[i];
	int j = 1;
	while (a[j] == 0) 
	{ 
		j++; 
	}
	printf("%d", j);
	a[j]--;
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < a[i]; j++)
			printf("%d", i);
	}
	return 0;
}
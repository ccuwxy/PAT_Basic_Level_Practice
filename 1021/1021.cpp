#include<iostream>
#include<string>
using namespace std;

int main()
{
	int a[10] = { 0 };
	char num[1001] = {'\0'};
	scanf("%s", num);
	for (int i = 0; num[i]!='\0'; i++)
	{
		a[num[i] - '0']++;
	}
	bool b = false;
	for (int i = 0; i < 10; i++)
	{
		
		if (a[i] > 0)
		{
			if (b)
				printf("\n");
			printf("%d:%d", i, a[i]);
			b = true;
		}
			
	}
	return 0;
}
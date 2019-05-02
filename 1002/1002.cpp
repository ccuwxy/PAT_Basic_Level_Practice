#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char n[101];
	char pinyin[10][5] = { "ling","yi","er","san","si","wu","liu","qi","ba","jiu" };
	int sum = 0;
	scanf("%s", &n);
	int length = strlen(n) - 1;
	while (length >= 0)
	{
		sum += n[length--] - '0';
	}
	char shu[5];
	int i = 0;
	while (sum > 0)
	{
		shu[i++] = (sum % 10)+'0';
		sum /= 10;
	}
	shu[i++] = '\0';
	int ii = strlen(shu)-1;
	while (ii>=0)
	{
		printf("%s", pinyin[shu[ii--]-'0']);
		if (ii >= 0)
			printf(" ");
	}
	
	system("pause");
	return 0;
}
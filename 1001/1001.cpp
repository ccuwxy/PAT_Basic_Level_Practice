#include<stdio.h>

int main()
{
	int count = 0;
	int N;
	scanf("%d", &N);
	while (N != 1) {
		if (N % 2 == 0) {
			N /= 2;
		}
		else
		{
			N = (3 * N + 1) / 2;
		}
		count++;
	}
	printf("%d", count);
	return 0;
}
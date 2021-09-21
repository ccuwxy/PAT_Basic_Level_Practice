#include<iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int sum = -1;
	int i = -1;
	int count = 0;
	char c;
	cin >> c;
	while (sum< n)
	{
		i += 2;
		count++;
		sum += 2 * i;
	}
	if (sum > n)
	{
		sum -= 2 * i;
		count--;
	}
		
	for (int j = 2 * count - 1; j > 0; j -= 2)
	{
		for (int k = 0; k < (2 * count - 1 - j) / 2; k++)
			printf(" ");
		for (int k = 0; k < j; k++)
			printf("%c", c);
		printf("\n");
	}
	for (int j = 3; j <= 2 * count - 1; j += 2)
	{
		for (int k = 0; k < (2 * count - 1 - j) / 2; k++)
			printf(" ");
		for (int k = 0; k < j; k++)
			printf("%c", c);
		printf("\n");
	}
	cout << n - sum;
	return 0;
}
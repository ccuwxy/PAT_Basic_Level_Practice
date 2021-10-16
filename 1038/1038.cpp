#include<iostream>

using namespace std;

int main()
{
	int N;
	int score[102] = { 0 };
	scanf("%d", &N);
	int temp;
	for (int i = 0; i < N; i++)
	{
		scanf("%d", &temp);
		score[temp]++;
	}
	int K;
	cin >> K;
	for (int i = 0; i < K; i++)
	{
		scanf("%d", &temp);
		if (i != 0)
			printf(" ");
		printf("%d", score[temp]);
	}
	return 0;
}
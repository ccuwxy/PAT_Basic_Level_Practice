#include<iostream>

using namespace std;

int main()
{
	int N;
	cin >> N;
	int* scores = new int[N];
	for (int i = 0; i < N; i++)
		scores[i] = 0;
	int group, score;
	for (int i = 0; i < N; i++)
	{
		scanf("%d %d", &group, &score);
		scores[group - 1] += score;
	}
	int maxIndex = 0;
	for (int i = 0; i < N; i++)
	{
		if (scores[maxIndex] < scores[i])
			maxIndex = i;
	}
	printf("%d %d", maxIndex + 1, scores[maxIndex]);
	return 0;
}
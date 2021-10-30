#include<iostream>
using namespace std;

int main()
{
	int n;
	int score[1001] = { 0 };
	cin >> n;
	int no, teamno, sc;
	for (int i = 0; i < n; i++)
	{
		scanf("%d-%d %d", &no, &teamno, &sc);
		score[no] += sc;
	}
	int maxteam=0, maxscore=0;
	for (int i = 1; i < 1001; i++)
	{
		if (score[i] > maxscore)
		{
			maxteam = i;
			maxscore = score[i];
		}
	}
	cout << maxteam << " " << maxscore;
	return 0;
}
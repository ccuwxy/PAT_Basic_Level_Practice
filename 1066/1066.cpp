#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int M, N, A, B, re;
	cin >> M >> N >> A >> B >> re;
	int* rgbs = new int[N];
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cin >> rgbs[j];
			if (rgbs[j] >= A && rgbs[j] <= B)
				rgbs[j] = re;
		}
		for (int j = 0; j < N; j++)
		{
			cout << setw(3) << setfill('0') << rgbs[j];
			if (j != N - 1)
				cout << " ";
		}
		cout << endl;
			
	}
	return 0;
}
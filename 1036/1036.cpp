#include<iostream>

using namespace std;

int main()
{
	int N;
	char c;
	cin >> N >> c;
	int end = N % 2 == 0 ? N / 2 : (N + 1) / 2;
	for (int i = 0; i < end; i++)
	{
		if (i == 0 || i == end-1)
		{
			for (int j = 0; j < N; j++)
				cout << c;
			if (i == 0)
				cout << endl;
		}
		else
		{
			cout << c;
			for (int j = 0; j < N-2; j++)
				cout << " ";
			cout << c << endl;
			
		}
	
	}
	return 0;
}
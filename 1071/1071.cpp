#include<iostream>
using namespace std;

int main()
{
	int T, K;
	cin >> T >> K;
	for (int i = 0; i < K; i++)
	{
		if (T == 0)
		{
			cout << "Game Over.";
			break;
		}
		int n1, b, t, n2;
		cin >> n1 >> b >> t >> n2;
		if (t > T)
			cout << "Not enough tokens.  Total = " << T <<"." << endl;
		else 
		{
			if (b == 1)
			{
				if (n2 > n1) {
					T += t;
					cout << "Win " << t << "!  Total = " << T << "." << endl;
				}
				else {
					T -= t;
					cout << "Lose " << t << ".  Total = " << T << "." << endl;
				}
			}
			else if (b == 0) {
				if (n2 < n1) {
					T += t;
					cout << "Win " << t << "!  Total = " << T << "." << endl;
				}
				else {
					T -= t;
					cout << "Lose " << t << ".  Total = " << T << "." << endl;
				}
			}
			
		}
	}
	return 0;
}
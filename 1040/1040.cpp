#include<iostream>
#include<string>
using namespace std;

int main()
{
	string s;
	cin >> s;
	int len = s.length(), countP = 0, countT = 0, ans = 0;
	for (int i = 0; i < len; i++)
		if (s.at(i) == 'T')
			countT++;

	for (int i = 0; i < len; i++)
	{
		if (s.at(i) == 'P')
			countP++;
		if (s.at(i) == 'T')
			countT--;
		if (s.at(i) == 'A')
			ans = (ans + (countP * countT) % 1000000007) % 1000000007;
	}
	cout << ans;
	return 0;
}
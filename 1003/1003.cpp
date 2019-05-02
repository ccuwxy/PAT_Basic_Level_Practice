#include<iostream>
#include<string>
using namespace std;
int main()
{
	int n;
	string s;
	cin >> n;
	while (n--)
	{
		cin >> s;
		size_t p = s.find_first_not_of('A');
		if (p == string::npos || s[p] != 'P')
		{
			cout << "NO" << endl;
			continue;
		}
		size_t t = s.find_first_not_of('A', p + 1);
		if (t == string::npos || s[t] != 'T' || t == p + 1)
		{
			cout << "NO" << endl;
			continue;
		}
		size_t m = s.find_first_not_of('A', t + 1);
		if (m != string::npos)
		{
			cout << "NO" << endl;
			continue;
		}
		if ((s.length() - 1 - t) == p * (t - p - 1))
		{
			cout << "YES" << endl;
			continue;
		}
		else
		{
			cout << "NO" << endl;
			continue;
		}
	}
	system("pause");
	return 0;
}
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
	string a, b,c, s = "0123456789JQK";
	cin >> a >> b;
	reverse(a.begin(), a.end());
	reverse(b.begin(), b.end());

	for (int i = 0; i < a.size() or i < b.size(); i++)
	{
		int k1 = i < a.size() ? a[i] - '0' : 0, k2 = i < b.size() ? b[i] - '0' : 0;
		c.push_back(i % 2 == 0 ? s[(k1 + k2) % 13] : s[(10 + k2 - k1) % 10] );
	}
	reverse(c.begin(), c.end());
	cout << c;
	return 0;
}
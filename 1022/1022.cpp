#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
	int a, b, d;
	cin >> a >> b >> d;
	int num = a + b;
	if (num == 0)
	{
		cout << 0;
		return 0;
	}
	string ans;
	while (num)
	{
		ans.push_back(num % d+'0');
		num /= d;
	}
	reverse(ans.begin(), ans.end());
	cout << ans;
	return 0;
}
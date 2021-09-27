#include<iostream>
#include<string>
using namespace std;

int main()
{
	int n;
	cin >> n;
	char c[11] = {'1','0','X','9','8','7','6','5','4','3','2'};
	int weight[18] = { 7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2 };
	string *s = new string[n];
	for (int i = 0; i < n; i++)
		cin >> s[i];
	bool flag = true;
	int sum = 0;
	bool first = false;
	for (int i = 0; i < n; i++)
	{
		sum = 0;
		flag = true;
		for (int j = 0; j < s[i].length()-1; j++)
		{
			sum += ((s[i].at(j) - '0')*weight[j]);
			if (s[i].at(j) < '0' || s[i].at(j) > '9')
			{
				flag = false;
				break;
			}
		}
		
		if (!flag || s[i].at(s[i].length() - 1) != c[sum % 11])
		{
			if (first)
				cout << endl;
			if (first == false)
				first = true;
			cout << s[i];
		}
		
	}
	if (!first)
		cout << "All passed";
	return 0;
}
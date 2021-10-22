#include<iostream>
#include<string>
using namespace std;

int main()
{
	string s;
	cin >> s;
	int count[128] = { 0 };
	char c;
	int num = 0;
	for (int i = 0; i < s.length(); i++)
	{
		c = s[i];
		if (c == 'P' || c == 'A' || c == 'T' || c == 'e' || c == 's' || c == 't')
		{
			count[c]++;
			num++;
		}
	}
	while (num)
	{
		if (count['P'] != 0)
		{
			printf("P" );
			count['P']--;
			num--;
		}
		if (count['A'] != 0)
		{
			printf("A");
			count['A']--;
			num--;
		}
		if (count['T'] != 0)
		{
			printf("T");
			count['T']--;
			num--;
		}
		if (count['e'] != 0)
		{
			printf("e");
			count['e']--;
			num--;
		}
		if (count['s'] != 0)
		{
			printf("s");
			count['s']--;
			num--;
		}
		if (count['t'] != 0)
		{
			printf("t");
			count['t']--;
			num--;
		}
	}
	return 0;
}
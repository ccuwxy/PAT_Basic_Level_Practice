#include<iostream>
#include<string>
using namespace std;

int main()
{
	char ball[62] = { 0 };
	string a, b;
	cin >> a >> b;
	char c;
	for (int i = 0; i < a.length(); i++)
	{
		c = a.at(i);
		if (c >= '0' && c <= '9')
			ball[c - '0']++;
		else if (c>='a' && c<='z')
		{
			ball[c - 61]++;
		}
		else if(c>='A'&&c<='Z')
		{
			ball[c - 55]++;
		}
	}
	for (int i = 0; i < b.length(); i++)
	{
		c = b.at(i);
		if (c >= '0' && c <= '9')
			ball[c - '0']--;
		else if (c >= 'a' && c <= 'z')
		{
			ball[c - 61]--;
		}
		else if (c >= 'A' && c <= 'Z')
		{
			ball[c - 55]--;
		}
	}
	int many = 0, less = 0;
	for (int i = 0; i < 62; i++)
	{
		if (ball[i] > 0)
			many += ball[i];
		else if (ball[i] < 0)
			less += ball[i];
	}
	if (less == 0)
		printf("Yes %d", many);
	else
		printf("No %d", -less);
	return 0;
}
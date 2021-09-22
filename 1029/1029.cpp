#include<iostream>
#include<string>

using namespace std;

int main()
{
	string a, b;
	char count[200] = { 0 };
	cin >> a >> b;
	char ch;
	for (int i = 0; i < b.length(); i++)
	{
		ch = b.at(i);
		if (ch >= 'a' && ch <= 'z')
			ch -= 32;
		count[ch]++;
	}
		
	for (int i = 0; i < a.length(); i++)
	{
		ch = a.at(i);
		if (ch >= 'a' && ch <= 'z')
			ch -= 32;
		if (count[ch] == 0)
		{
			printf("%c", ch);
			count[ch] = -1;
		}
			
	}
	return 0;
}
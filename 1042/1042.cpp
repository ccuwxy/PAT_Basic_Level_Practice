#include<iostream>
#include<string>

using namespace std;

int main()
{
	int count[27] = { 0 };
	string s;
	getline(cin, s);
	for (int i = 0; i < s.length(); i++)
		if (s[i] >= 'A' && s[i] <= 'Z')
			count[s[i] - 'A']++;
		else if (s[i] >= 'a' && s[i] <= 'z')
			count[s[i] - 'a']++;
	int maxIndex = 0;
	for (int i = 0; i <= 26; i++)
	{
		if (count[i] > count[maxIndex])
			maxIndex = i;
	}
	printf("%c %d", (maxIndex+'a'), count[maxIndex]);
	return 0;
}
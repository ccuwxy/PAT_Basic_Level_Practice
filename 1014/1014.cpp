#include<iostream>
#include<string>
using namespace std;

int main()
{
	string s1, s2, s3, s4;
	cin >> s1 >> s2 >> s3 >> s4;
	int week = 0, hour = -1, minus = -1;
	int flag = 0;
	int temp;
	for (int i = 0; i < s1.size() && i < s2.size(); i++)
	{
		temp = s1.at(i);
		if (temp == s2.at(i))
		{
			if (flag == 0)
			{
				if (temp > 'G' || temp < 'A')
					continue;
				week = temp - 'A' + 1;
				flag++;
			}
			else if (temp >= '0' && temp <= '9' || temp >= 'A' && temp <= 'N') {
				hour = temp >= 'A' ? (temp - 'A' + 10) : (temp - '0');
				break;
			}
		}
	}
	for (int i = 0; i < s3.size() && i < s4.size(); i++)
	{
		temp = s3.at(i);
		if (temp < 'A' || (temp > 'Z' && temp < 'a') || temp >'z')
			continue;
		if (temp == s4.at(i))
		{
			minus = i;
		}
	}
	string week_str[] = { "","MON","TUE","WED","THU","FRI","SAT","SUN" };
	cout << week_str[week] << " ";
	printf("%02d:%02d", hour, minus);
	return 0;
}
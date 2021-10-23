#include<iostream>
#include<string>
using namespace std;

string a[13] = { "tret","jan", "feb", "mar", "apr", "may", "jun", "jly", "aug", "sep", "oct", "nov", "dec"};
string b[13] = { "###","tam", "hel", "maa", "huh", "tou", "kes", "hei", "elo", "syy", "lok", "mer", "jou" };
string s;
void fun1(int num)
{
	if (num / 13)
		cout << b[num / 13];
	if ((num / 13) && (num % 13))
		cout << " ";
	if((num%13) || (num==0))
		cout << a[num % 13];
}

void fun2()
{
	int n1 = 0, n2 = 0;
	string s1 = s.substr(0, 3), s2;
	if (s.length() > 4)
		s2 = s.substr(4, 3);
	for (int i = 1; i < 13; i++)
	{
		if (s1 == a[i] || s2 == a[i])
			n1 = i;
		if (s1 == b[i])
			n2 = i;
	}
	cout << n2 * 13 + n1;
}
int main()
{
	int N;
	cin >> N;
	getchar();
	for (int i = 0; i < N; i++)
	{
		getline(cin, s);
		if (s[0] >= '0' && s[0] <= '9')
			fun1(stoi(s));
		else
			fun2();
		cout << endl;
	}
	return 0;
}
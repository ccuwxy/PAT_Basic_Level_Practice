//由题意得，P前面只能有A

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
		size_t p = s.find_first_not_of('A'); // 找到第一个不是A的位置
		if (p == string::npos || s[p] != 'P') //如果全是A或者最后一个A的后面不是P，则答案错误
		{
			cout << "NO" << endl;
			continue;
		}
		size_t t = s.find_first_not_of('A', p + 1); // 从p+1位置开始找不是A的位置，其实就是找T的位置
		if (t == string::npos || s[t] != 'T' || t == p + 1)//最后一个连续A的下一个不存在，或者不是T，或者P后面直接就是T，答案错误
		{
			cout << "NO" << endl;
			continue;
		}
		size_t m = s.find_first_not_of('A', t + 1);// 为了判断T后面有几个A，
		if (m != string::npos) // 如果T后面不全是A，则答案错误
		{
			cout << "NO" << endl;
			continue;
		}
		if ((s.length() - 1 - t) == p * (t - p - 1)) //T后面A的个数 等于 P前面A的个数 乘 P、T之间A的个数减一（由条件三判断）
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

	return 0;
}
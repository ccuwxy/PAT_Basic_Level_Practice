#include<iostream>
#include<string>
#include<math.h>
using namespace std;

int main()
{
	string a;
	char sign1, sign2;
	cin >> a;
	sign1 = a.at(0);
	a.erase(0,1);
	int pos_E =  a.find_first_of('E');
	sign2 = a.at(pos_E + 1);

	int index = 0;
	int j = 0;
	for (int i = a.length()-1; i > pos_E+1; i--)
	{
		index += (int)((a.at(i) - '0') * pow(10, j++));
	}
	a.erase(pos_E);
	if (sign2 == '+')
	{
		int behind_dot = a.length() - 2;
		if (index >= behind_dot)
		{
			for (int i = 0; i < index - behind_dot; i++)
				a.push_back('0');
			a.erase(1, 1);
		}
		else
		{
			a.erase(1, 1);
			a.insert(1+index,".",1);	
		}	
	}
	else if (sign2 == '-') {
		a.erase(1, 1);
		for (int i = 0; i < index; i++)
		{
			a.insert(0, "0", 1);
		}
		a.insert(1, ".", 1);
		
	}
	if (sign1 == '-')
	{
		cout << sign1 << a;
	}
	else
	{
		cout << a;
	}
	return 0;
}
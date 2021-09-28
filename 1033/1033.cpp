#include<iostream>
#include<string>
//#include<stdlib.h>
using namespace std;

int main()
{
	int ascii[128] = { 0 };
	string a, b;
	string c;
	getline(cin,a);
	getline(cin,b);
	for (int i = 0; i < a.length();i++)
	{
		ascii[a.at(i)] = 1;
		if(a.at(i)>='A' && a.at(i)<='Z')
			ascii[a.at(i)+32] = 1;
	}
	if (ascii['+']==1)
	{
		for (int i = 'A'; i <= 'Z'; i++)
			ascii[i] = 1;
	}
	for (int i = 0; i < b.length(); i++)
	{
		if (ascii[b.at(i)]==0)
			c.push_back(b.at(i));
	}
	cout << c;
	return 0;
}
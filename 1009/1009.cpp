#include<iostream>
#include<string>
#include<list>
using namespace std;
int main()
{
	list<string> list;
	string s;
	getline(cin, s);
	string::size_type pos1 = 0, pos2 = 0;
	while (string::npos != pos2)
	{
		pos2 = s.find(' ', pos1);
		//cout << pos1 << " " << pos2 << endl;
		string tem = s.substr(pos1, pos2 - pos1);
		if (tem.compare(""))
			list.push_back(tem);
		//cout << pos1 << " " << pos2 << endl;
		//cout << vec.back() << endl;
		pos1 = pos2 + 1;
	}
	for (; list.size()!=0;)
	{
		cout << list.back();
		if (list.size() != 1) {
			cout << ' ';
		}
		list.pop_back();
	}
	system("pause");
	return 0;
}
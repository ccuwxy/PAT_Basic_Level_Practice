#include<cstdio>
#include<iostream>
#include<unordered_map>
#include<string>

using namespace std;
int main()
{
	unordered_map<string, int> map{
		{"Jan",1},
		{"Feb",2},
		{"Mar",3},
		{"Apr",4},
		{"May",5},
		{"Jun",6},
		{"Jul",7},
		{"Aug",8},
		{"Sep",9},
		{"Oct",10},
		{"Nov",11},
		{"Dec",12}
	};
	string month;
	int year, day;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> month;
		scanf(" %d, %d",&day,&year);
		char date[9];
		sprintf(date, "%04d%02d%02d", year, map[month], day);
		int left = 0, right = 7;
		while (left < right)
		{
			if (date[left] != date[right])
			{
				cout << "N ";
				break;
			}
			left++;
			right--;
		}
		if (left >= right)
			cout << "Y ";
		cout << string(date) << endl;
	}
	
	return 0;
}
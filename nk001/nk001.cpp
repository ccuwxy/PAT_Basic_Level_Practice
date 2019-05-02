#include<vector>
#include<iostream>
using namespace std;

bool Find(int target, vector<vector<int> > array);

int main()
{
	vector<vector<int>> arr;
	vector<int> v;

	v.push_back(0);
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	arr.push_back(v);
	v.clear();
	v.push_back(4);
	v.push_back(5);
	v.push_back(6);
	v.push_back(7);
	arr.push_back(v);
	v.clear();
	v.push_back(8);
	v.push_back(9);
	v.push_back(10);
	v.push_back(11);
	arr.push_back(v);
	v.clear();
	cout << Find(4, arr);
	system("pause");
	return 0;
}

bool Find(int target, vector<vector<int> > array) {
	int cows = array[0].size();
	int rows = array.size();
	if (cows == 0 || rows == 0)
	{
		return false;
	}
	if (target < array[0][0] || target > array[rows - 1][cows - 1])
	{
		return false;
	}
	int j = 0, i = cows - 1;
	while (i >= 0 && j < rows )
	{
		if (array[j][i] < target)
		{
			j++;
		}
		if (array[j][i] < target)
		{
			i--;
		}
		if (array[j][i] = target)
		{

			return true;
		}

	}
	return false;
}
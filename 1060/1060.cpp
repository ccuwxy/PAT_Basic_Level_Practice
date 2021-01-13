//                     1060 爱丁顿数 (25分)
//英国天文学家爱丁顿很喜欢骑车。据说他为了炫耀自己的骑车功力，还定义了一个“爱丁顿数” E，
//即满足有 E 天骑车超过 E 英里的最大整数 E。据说爱丁顿自己的 E 等于87。
//现给定某人 N 天的骑车距离，请你算出对应的爱丁顿数 E（≤N）。
//
//输入格式：
//输入第一行给出一个正整数 N(≤10^5​)，即连续骑车的天数；
//第二行给出 N 个非负整数，代表每天的骑车距离。
//
//输出格式：
//在一行中给出 N 天的爱丁顿数。
//
//输入样例：
//10
//6 7 6 9 3 10 8 2 7 8
//输出样例：
//6

#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int N;
	cin >> N;
	int* nums = new int[N];
	for (int i = 0; i < N; i++)
	{
		cin >> nums[i];
	}
	sort(nums, nums + N);  //从小到大快排

	if (nums[0] > N)  //如果骑行距离最小对应的天数都大于骑行的天数，直接输出骑行的天数
		cout << N;
	else
		for (int i = N - 1; i >= 0; i--)
		{
			if (N - i >= nums[i])    //找到天数大于等于元素值
			{
				cout << N - i - 1;   //去除当前元素对应的天数，输出天数-1
				break;
			}
		}

	delete[] nums;
	return 0;
}
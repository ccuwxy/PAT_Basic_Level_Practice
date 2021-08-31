#include<iostream>
#include <iomanip> 
using namespace std;

int main()
{
	int N;
	int A1 = 0, A2 = 0, A3 = 0, A5 = 0;
	float A4 = 0;
	int count1 = 0, count2 = 0, count3 = 0, count4 = 0, count5 = 0;
	float sum4 = 0.0;
	cin >> N;
	int temp;
	int flag = 1;
	for (int i = 0; i < N; i++)
	{
		cin >> temp;
		if (temp % 5 == 0 && temp % 2 == 0)
		{
			count1++;
			A1 += temp;
		}
			
		if (temp % 5 == 1)
		{
			count2++;
			A2 += flag * temp;
			flag *= -1;
		}
		if (temp % 5 == 2)
		{
			count3++;
			A3++;
		}
			
		if (temp % 5 == 3)
		{
			count4++;
			sum4 += temp;
		}
		if (temp % 5 == 4)
		{
			count5++;
			A5 = A5 > temp ? A5 : temp;
		}
			
	}
	A4 = (float)sum4 / count4;
	if (count1)
		cout << A1 << " ";
	else
		cout << "N ";
	if (count2)
		cout << A2 << " ";
	else
		cout << "N ";
	if (count3)
		cout << A3 << " ";
	else
		cout << "N ";
	if (count4)
		//printf("%0.1f ", A4);
		cout << setiosflags(ios::fixed) << setprecision(1) << A4 << " ";
	else
		cout << "N ";
	if (count5)
		cout << A5;
	else
		cout << "N";
	return 0;
}
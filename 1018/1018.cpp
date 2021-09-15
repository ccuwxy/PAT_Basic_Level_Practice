#include<iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;
	int a1 = 0, a2 = 0, a3 = 0, b1 = 0, b2 = 0, b3 = 0;
	char atemp, btemp;
	int aB = 0, aJ = 0, aC = 0;
	int bB = 0, bJ = 0, bC = 0;
	for (int i = 0; i < N; i++)
	{
		cin >> atemp;
		cin >> btemp;

		if (atemp == btemp)
		{
			a2++;
			b2++;
		}
		else if (atemp == 'C')
		{
			if (btemp == 'J')
			{
				aC++;
				a1++;
				b3++;
			}
			else
			{
				bB++;
				b1++;
				a3++;
			}	
		}
		else if (atemp == 'J')
		{
			if (btemp == 'B')
			{
				aJ++;
				a1++;
				b3++;
			}
			else
			{
				bC++;
				b1++;
				a3++;
			}
		}
		else if (atemp == 'B')
		{
			if (btemp == 'C')
			{
				aB++;
				a1++;
				b3++;
			}
			else
			{
				bJ++;
				b1++;
				a3++;
			}
		}
	}
	printf("%d %d %d\n%d %d %d\n", a1, a2, a3, b1, b2, b3);
	if (aB >= aC && aB >= aJ)
		printf("B ");
	else if (aC >= aB && aC >= aJ)
		printf("C ");
	else
		printf("J ");
	if (bB >= bC && bB >= bJ)
		printf("B");
	else if (bC >= bB && bC >= bJ)
		printf("C");
	else
		printf("J");
	return 0;
}
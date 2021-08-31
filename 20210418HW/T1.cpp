#include <iostream>
#include <string.h>

using namespace std;

char systemValueStr[37] = "0123456789abcdefghigklmnopkrstuvwxyz";

int main()
{
	while (1)
	{
		int n;
		char strbuf1[128] = {};
		char strbuf2[128] = {};

		cin >> n;
		cin >> strbuf1;
		cin >> strbuf2;

		int nlen1 = strlen(strbuf1);
		int nlen2 = strlen(strbuf2);

		if (nlen1 > 1 && strbuf1[0] == '0')
		{
			cout << '-1' << endl;
			return 0;
		}
		if (nlen2 > 1 && strbuf2[0] == '0')
		{
			cout << '-1' << endl;
			return 0;
		}

		for (int i = 0; i < nlen1; i++)
		{
			if (strbuf1[i] >= '0' && strbuf1[i] <= '9')
			{
				if ((strbuf1[i] - '0') >= n)
				{
					cout << '-1' << endl;
					return 0;
				}
				else
				{
					strbuf1[i] = strbuf1[i] - '0';
				}
			}
			else if (strbuf1[i] >= 'a' && strbuf1[i] <= 'z')
			{
				if ((strbuf1[i] - 'a') >= (n - 10))
				{
					cout << '-1' << endl;
					return 0;
				}
				else
				{
					strbuf1[i] = strbuf1[i] - 'a' + 10;
				}
			}
			else
			{
				cout << '-1' << endl;
				return 0;
			}
		}

		for (int i = 0; i < nlen2; i++)
		{
			if (strbuf2[i] >= '0' && strbuf2[i] <= '9')
			{
				if ((strbuf2[i] - '0') >= n)
				{
					cout << '-1' << endl;
					return 0;
				}
				else
				{
					strbuf2[i] = strbuf2[i] - '0';
				}
			}
			else if (strbuf2[i] >= 'a' && strbuf2[i] <= 'z')
			{
				if ((strbuf2[i] - 'a') >= (n - 10))
				{
					cout << '-1' << endl;
					return 0;
				}
				else
				{
					strbuf2[i] = strbuf2[i] - 'a' + 10;
				}
			}
			else
			{
				cout << '-1' << endl;
				return 0;
			}
		}

		int nindex = 1;
		int nret = strcmp(strbuf1, strbuf2);
		if (1 == nret)
		{
			for (int i = 0; i < nlen2; i++)
			{
				if (strbuf1[nlen1 - nindex] >= strbuf2[nlen2 - nindex])
				{
					strbuf1[nlen1 - nindex] = strbuf1[nlen1 - nindex] - strbuf2[nlen2 - nindex];
				}
				else
				{
					strbuf1[nlen1 - nindex] -= 1;
					strbuf1[nlen1 - nindex] = n + strbuf1[nlen1 - nindex] - strbuf2[nlen2 - nindex];
				}
				nindex++;
			}

			cout << "0 ";
			for (int i = 0; i < nlen1; i++)
			{
				cout << systemValueStr[strbuf1[i]];
			}
		}
		else if (-1 == nret)
		{
			for (int i = 0; i < nlen1; i++)
			{
				if (strbuf2[nlen2 - nindex] >= strbuf1[nlen1 - nindex])
				{
					strbuf2[nlen2 - nindex] = strbuf2[nlen2 - nindex] - strbuf1[nlen1 - nindex];
				}
				else
				{
					strbuf2[nlen2 - nindex] -= 1;
					strbuf2[nlen2 - nindex] = n + strbuf2[nlen2 - nindex] - strbuf1[nlen1 - nindex];
				}
				nindex++;
			}

			cout << "1 ";
			for (int i = 0; i < nlen2; i++)
			{
				cout << systemValueStr[strbuf2[i]];
			}
		}
		else
		{
			cout << "0 0";
		}
		cout << endl;

	}

	system("pause");
	return 0;
}

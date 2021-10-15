#include<iostream>
#include<algorithm>


using namespace std;
bool cmp(int a, int b)
{
	return a < b;
}
bool isInsertion(int n, int a[], int b[])
{
	int i, length;
	for (i = 0; i < n - 1 && b[i] <= b[i + 1]; i++)
		continue;
	for (i++,length = i; i < n && b[i] == a[i]; i++)
		continue;
	if (i == n)
	{
		cout << "Insertion Sort" << endl;
		sort(a, a+(++length), cmp);
		return true;
	}
	return false;
}
void nextMerge(int N, int a[], int b[])
{
	int i, j, length;
	cout << "Merge Sort" << endl;
	for (length = 1, i = 0; i < N && length <= N; length *= 2)
	{
		for (i = 0; i < N && a[i] == b[i]; i++);
		for (j = 0; j < N / length; j++)
		{
			sort(a + j * length, a + j * length + length, cmp);
		}
		sort(a + j * length, a + j * length + N % length, cmp);
	}
	return;
}
int main()
{
	int N;
	cin >> N;
	int* a = new int[N];
	int* b = new int[N];
	for (int i = 0; i < N; i++)
		cin >> a[i];
	for (int i = 0; i < N; i++)
		cin >> b[i];
	if (!isInsertion(N, a, b))
	{
		nextMerge(N, a, b);
	}
	for (int i = 0; i < N; i++)
	{
		printf("%d%c", a[i], i == N - 1 ? '\n' : ' ');
	}

	return 0;
}
#include<iostream>

using namespace std;

struct ExamNum
{
	string examNo;
	int examNum;
};

int main()
{
	int N, M;
	cin >> N;
	ExamNum* exam = new ExamNum[N+1];
	string s;
	int no;
	for (int i = 0; i < N; i++)
	{
		cin >> s >> no;
		exam[no].examNo = s;
		cin >> exam[no].examNum;
	}
	cin >> M;
	for (int i = 0; i < M; i++)
	{
		if (i != 0)
			cout << endl;
		cin >> no;
		cout << exam[no].examNo << " " << exam[no].examNum;
	}
	return 0;
}
#include<iostream>
using namespace std;

int main()
{
	int c1, c2;
	scanf("%d %d", &c1, &c2);
	int ans = c2 - c1 + 50;
	int hour = ans / 360000, minues = ans % 360000 / 6000;
	int sec = ans % 6000 / 100;
	printf("%02d:%02d:%02d", hour, minues, sec);
	return 0;
}
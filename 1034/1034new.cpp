#include <iostream>
#include <cmath>
using namespace std;
long a, b, c, d;
long gcd(long t1, long t2) {//���Լ��
	return t2 == 0 ? t1 : gcd(t2, t1 % t2);
}
void func(long m, long n) {
	if ((m && n) == 0) {//����0���0����ĸ0���INF
		printf("%s", n == 0 ? "Inf" : "0");
		return;
	}
	bool flag = (m ^ n) < 0;//�Ƿ���
	m = abs(m); n = abs(n);
	long x = m / n;//��ʽ����������
	printf("%s", flag ? "(-" : "");
	if (x != 0) printf("%ld", x);
	if (m % n == 0) {
		if (flag) printf(")");
		return;
	}
	if (x != 0) printf(" ");
	m = m - x * n;
	long t = gcd(m, n);//���ӷ�ĸ�����Լ��
	m = m / t; n = n / t;
	printf("%ld/%ld%s", m, n, flag ? ")" : "");
}
int main() {
	scanf("%ld/%ld %ld/%ld", &a, &b, &c, &d);
	func(a, b); printf(" + "); func(c, d); printf(" = "); func(a * d + b * c, b * d); printf("\n");
	func(a, b); printf(" - "); func(c, d); printf(" = "); func(a * d - b * c, b * d); printf("\n");
	func(a, b); printf(" * "); func(c, d); printf(" = "); func(a * c, b * d); printf("\n");
	func(a, b); printf(" / "); func(c, d); printf(" = "); func(a * d, b * c);
	return 0;
}
//#include<iostream>
//
//using namespace std;
//
//int maxDivisor(int a, int b)
//{
//	int r, n;
//	if (a < b)
//		swap(a, b);
//	r = a % b;
//	n = a * b;
//	while (r != 0)
//	{
//		a = b;
//		b = r;
//		r = a % b;
//	}
//	return b;
//}
//
//void print(int a, int b, int c, bool d)
//{
//	if (d)
//	{
//		if (c == 0)
//		{
//			if (a == 0)
//				printf("0");
//			else
//				printf("%d/%d", a, b);
//		}
//		else
//		{
//			if (a == 0)
//				printf("%d", c);
//			else
//				printf("%d %d/%d", c, a, b);
//		}
//	}
//	else
//	{
//		if (c == 0)
//		{
//			if (a == 0)
//				printf("0");
//			else
//				printf("(-%d/%d)", a, b);
//		}
//		else
//		{
//			if (a == 0)
//				printf("(-%d)", c);
//			else
//				printf("(-%d %d/%d)", c, a, b);
//		}
//	}
//}
//int main()
//{
//	bool d1, d2, d3;
//	int a1, a2, a3, b1, b2, b3;
//	int c1, c2, c3;
//	int e1, e2, e3;
//	scanf("%d/%d %d/%d", &a1, &b1, &a2, &b2);
//	d1 = ((a1 ^ b1) < 0);//true ¸º£¬false Õý
//	d2 = ((a2 ^ b2) < 0);
//	int div1 = maxDivisor(b1, a1);
//	int div2 = maxDivisor(a2, b2);
//
//	b1 /= div1;
//	b2 /= div2;
//	a1 /= div1;
//	a2 /= div2;
//
//	c1 = a1 / b1;
//	a1 %= b1;
//
//	c2 = a2 / b2;
//	a2 %= b2;
//
//
//
//	print(a1, b1, c1, d1);
//	printf(" + ");
//	print(a2, b2, c2, d2);
//	printf(" = ");
//	b3 = b1 * b2;
//	a3 = a1 * b2 + a2 * b1;
//	d3 = ((a3 ^ b3) < 0);
//	int div3 = maxDivisor(a3, b3);
//	b3 /= div3;
//	a3 /= div3;
//	c3 = c1 + c2 + a3 / b3;
//	a3 %= b3;
//
//	print(a3, b3, c3, d3);
//
//
//	return 0;
//}
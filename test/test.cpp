#include<stdio.h>
int main()
{
    int a, b, t, r, n;
    printf("�������������֣�\n");
    scanf("%d %d", &a, &b);
    if (a < b)
    {
        t = b; b = a; a = t;
    }
    r = a % b;
    n = a * b;
    while (r != 0)
    {
        a = b;
        b = r;
        r = a % b;
    }
    printf("�������������Լ����%d����С��������%d\n", b, n / b);

    return 0;
}
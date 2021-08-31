#include  <stdio.h>
void  a(int i)
{
    int j, k;
    for (j = 0; j <= 7 - i; j++)    
        printf("бб");
    for (k = 0; k < i * 2 + 1; k++)   //
        printf("гд");
    printf("\n");
}

int main()
{
    int  i;
    for (i = 0; i < 3; i++)
        a(i);
    for (i = 3; i >= 0; i--)
        a(i);//

    //printf("  гд");
}

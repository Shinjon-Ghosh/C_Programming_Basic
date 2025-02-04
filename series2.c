#include<stdio.h>
int main()
{
    int a,b,n1,n2,sum = 0;
    a=1 , b=2;
    scanf("%d%d", &n1,&n2);

    while(a <= n1 && b <= n2)
    {
        sum = sum + a*b;
        a = a + 1;
        b = b + 1;
    }

    printf("1.2 + 2.3 + ..... %d.%d = %d", n1,n2,sum);
    return 0;
}

#include<stdio.h>
int main ()
{
    int a,b,c;
    printf("Enter any three integer values:\n");
    scanf("%d%d%d", &a,&b,&c);

    if(a>b && b>c)
    {
    printf("%d is the greatest value\n", a);
    }
    else if(b>a && b>c)
    {
    printf("%d is the greatest value\n", b);}
    else
    printf("%d is the greatest value\n", c);
    return 0;
}


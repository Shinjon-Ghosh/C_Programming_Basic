#include<stdio.h>
int main()
{
    int num1,num2,n1,n2,rem,lcm,gcd;
    scanf("%d%d", &num1,&num2);
    n1 = num1;
    n2 = num2;
    while(n2 != 0)
    {
        rem = n1 % n2;
        n1 = n2;
        n2 = rem;
    }
    gcd = n1;
    lcm = (num1*num2)/gcd;
    printf("gcd = %d\n", gcd);
    printf("lcm = %d\n", lcm);
    return 0;
}

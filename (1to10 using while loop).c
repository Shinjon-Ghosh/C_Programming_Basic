#include<stdio.h>
int main()
{
    int n,f;
    scanf("%d", &n);
    scanf("%d", &f);
    while (n<=f)
    {
        printf("%d\n",n);
        n++;
    }
    return 0;
}

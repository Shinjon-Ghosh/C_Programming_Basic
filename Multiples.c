#include<stdio.h>
int main()
{
    int i,f;
    scanf("%d", &f);
    i=1;
    while (i<=10)
    {
        printf("%d*%d = %d\n",f,i,f*i);
        i++;
    }
    return 0;
}


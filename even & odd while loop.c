#include<stdio.h>
int main()
{
    int x;
    printf("Enter the number :");
    while((scanf("%d", &x))== 1)
    {
    if((x%2)==0)
    {
    printf("The number is even\n");
    }
    else

    printf("The number is odd\n");
    }
return 0;
}

#include<stdio.h>
int main()
{
    int i,n,x;
    printf("how many time do u want :");
    scanf("%d", &n);
    for(i =1; i<= n; i++)
    {
    printf("Enter the number :");
    scanf("%d", &x);
    if((x%2)==0)
    {
    printf("The number is even\n");
    }
    else

    printf("The number is odd\n");
    }
return 0;
}

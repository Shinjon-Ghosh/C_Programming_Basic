
#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    double x1,x2;
    while(scanf("%d%d%d",&a,&b,&c) == 3){
    if((b*b)-4*a*c > 0)
    {

    x1 = (-b+sqrt((b*b)-4*a*c))/(2*a) ;
    x2 = (-b-sqrt((b*b)-4*a*c))/(2*a) ;
        printf("%lf\n", x1);
        printf("%lf\n", x2);
    }
    else
    {
        printf("Invalid\n");
    }
}
    return 0;

}

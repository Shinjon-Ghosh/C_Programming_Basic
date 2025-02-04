#include<stdio.h>
int main()
{
    int i,f;
    for (f=1;f<=20;f++)
    {
      for (i=1;i<=10;i++)
      {
      printf("%d*%d=%d\n",f,i,f*i);
      }
    }
    return 0;
}

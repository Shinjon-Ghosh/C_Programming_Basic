#include<stdio.h>
int main()
{
    char a;
    scanf("%c", &a);

    a = a-32; // a = toupper(a);//
    printf("%c\n", a);
    return 0;
}

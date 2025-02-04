#include<stdio.h>
int main()
{
    char ch,extra;
    while(scanf("%c%c", &ch,&extra) == 2)
    {
        if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
        {
            printf("char = %c\n", ch);
        }
        else if ( ch >= '0' && ch <= '9')
        {
            printf("Digit = %c\n", ch);
        }
        else if(ch == '.' || ch == '"' || ch == ',' || ch == ':' || ch == ';')
        {
            printf("Punctuation = %c\n", ch);
        }
        else
        {
            printf("Others\n");
        }
    }

    return 0;
}

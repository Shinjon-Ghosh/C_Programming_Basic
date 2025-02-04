#include<stdio.h>
int main()
{
    int choice;
    double temp, faren_temp, deg_temp;
    printf("What temperatures conversion do u want?\n 1.Fahrenheit \n 2.Degree \n");
    scanf("%d", &choice);
    switch(choice){
    case 1 :
    {
        printf("Enter Degree Celcius Temperature :");
        scanf("lf", &temp);
        faren_temp = (1.8*temp)+32;
        printf("%0.2lf\n", faren_temp);
        break ;
    }
    case 2 :
    {
        printf("Enter Fahrenheit Temperature :");
        scanf("%lf", &temp);
        deg_temp = (temp - 32)/1.8;
        printf("0.2lf\n", deg_temp);
        break;
    }
    }
    default :
    {
        printf("Magur_Mas\n");
        break
    }
    return 0;
}



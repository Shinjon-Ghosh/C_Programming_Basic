#include<stdio.h>
int main()
{
    double i,n,bn,en,phy,chem,bio,mat,total;
    double percent;
    printf("How many students : ");
    scanf("%lf", &n);
    for (i = 1; i<= n; i++)
    {
     scanf("%lf%lf%lf%lf%lf%lf", &bn, &en, &phy, &chem, &bio, &mat);
     total = bn+en+phy+chem+bio+mat;
     percent = (total/600)*100;
     // printf("percentage score is : %0.0lf\n", percent);
     if(bn < 40|| en < 40|| phy <40 || chem <40 || bio <40 || mat < 40)
     {
      printf("Fail\n");
     }
     else if(percent >= 80)
     {
        printf("CGPA = 4.00\n");
     }
     else if(percent >= 75)
     {
        printf("CGPA =3.75\n");
     }
     else if(percent >= 70)
     {
        printf("CGPA =3.50\n");
     }
     else if(percent >= 65)
     {
        printf("CGPA =3.25\n");
     }
     else if(percent >= 60)
     {
        printf("CGPA =3.00\n");
     }
     else if(percent >= 55)
     {
        printf("CGPA =2.75\n");
     }
     else if(percent >= 50)
     {
        printf("CGPA = 2.5\n");
     }
     else if(percent >= 45)
     {
        printf("CGPA =2.25\n");
     }
     else if(percent >= 40)
     {
        printf("CGPA =2.00\n");
     }
     else if(percent < 40)
     {
     printf( "Fail");
     }
    }
    return 0;

}

#include<stdio.h>
int main()
{
    int jy,cy,yos;

    printf("Enter the joining Year ");
    scanf("%d",&jy);
    printf("Enter the current Year ");
    scanf("%d",&cy);

    yos=cy-jy;

    if(yos>=7)
    {
        printf("5000 Bonus");
    }

    else if(yos>=4 && yos<=6)
    {
        printf("3000 Bonus");
    }

    else if(yos>1 && yos<=3)
    {
        printf("1000 Bonus");
    }

    else
    {
        printf("Sorry ! No Bonus");
    }
}
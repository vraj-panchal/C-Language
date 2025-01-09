#include<stdio.h>
int main()
{
    int jy,cy,yos;

    printf("Enter the Your of joining ");
    scanf("%d",&jy);
    printf("Enter the Year of current ");
    scanf("%d",&cy);

    yos=cy-jy;

    if(cy<jy)
    {
        printf("Error");
    }

    else if(yos>=3)
    {
        printf("Congratulations ! you are eligibal for bonus of Rs.5000 ");
    }

    else
    {
        printf("Sorry NO bonus ");
    }

    return 0;
}
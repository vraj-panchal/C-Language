#include<stdio.h>
int main()
{
    float km,n,cm,f,i,m;

    printf("Please Enter the distance in Kilometers ");
    scanf("%f",&km);

    if(km<0)
    {
        printf("Error");
    }

    else
    {
        m=km*1000;
        cm=m*100;
        i=cm/2.54;
        f=i/12;

        printf("Meters:%f\n",m);
        printf("centimeters:%f\n",cm);
        printf("feer:%f\n",f);
        printf("inch:%f\n",i);
    }

    return 0;
}
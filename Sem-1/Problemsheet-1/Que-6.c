#include<stdio.h>
int main()
{
    float bs,da,hra,ma,gs;

    printf("Enter the value bs");
    scanf("%f",&bs);

    if(bs<0)
    {
        printf("Error");
    }

    else
    {
        da=bs*0.4;
        hra=bs*0.2;
        ma=bs*0.05;
        gs=bs+da+hra+ma;

        printf("%f",gs);
    }

    return 0;
}
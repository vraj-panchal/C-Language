#include<stdio.h>
int main()
{
    int wt,ot;
    float payment;

    printf("Enter the working time");
    scanf("%d",&wt);

    ot=wt-40;

    if(ot<=0)
    {
        payment=wt*2.50;
        printf("%f",payment);
    }

    else if(ot>=1 && ot<=5)
    {                                       
        payment=(ot*7.00)+(40*2.50);
         printf("%f",payment);
    }

    else if(ot>=6 && ot<=10)
    {                                       //100
        payment=(ot*80.50)+(40*2.50);
         printf("%f",payment);
    }

    else
    {
        payment=(ot*12.00)+(40*2.50);
         printf("%f",payment);
    }

    return 0;
}
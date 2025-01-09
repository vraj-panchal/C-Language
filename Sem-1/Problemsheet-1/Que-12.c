#include<stdio.h>
int main()
{
    int wt,ot,payment;

    printf("Enter the Working time ");
    scanf("%d",&wt);

    ot=wt-48;
    
    if(ot<=0)
    {
        payment=wt*50;
        printf("%d",payment);
    }
    else if(ot>=1 && ot<=5)
    {
        payment=(ot*70)+(48*50);
         printf("%d",payment);
    }
    else if(ot>=6 && ot<=10)
    {
        payment=(ot*85)+(48*50);
        printf("%d",payment);
    }
    else
    {
        payment=(ot*120)+(48*50);
         printf("%d",payment);
    }

    return 0;
}
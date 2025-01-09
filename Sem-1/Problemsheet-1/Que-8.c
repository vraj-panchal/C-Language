#include<stdio.h>
int main()
{
    float P_13,P_14,P_15,P_16,P_17,P_18;

    printf("Enter Year");
    scanf("%f",&P_13);

    if(P_13<0)
    {
        printf("invalid input");
    }

    else
    {
        P_14=P_13+(P_13*0.10);
        P_15=P_14-(P_14*0.10);
        P_16=P_15+(P_15*0.11230);
        P_17=P_16;
        P_18=P_17-(P_17*0.042);

        printf("%f",P_18);
    }

    return 0;
}
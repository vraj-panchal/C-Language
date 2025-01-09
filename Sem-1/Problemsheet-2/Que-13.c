#include<stdio.h>
int main()
{
    int i,n,sum=0;

    printf("Enter Positive integer ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
            printf("%d",i);
            sum=sum+i;
        }
    }

    printf("\n Sum of odd no is%d",sum);

    return 0;

}
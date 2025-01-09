#include<stdio.h>
int main()
{
    int sum=0,n,d,i;

    printf("Enter the Number ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        d=n%10;
        if(d%2!=0)
        {
            sum=sum+d;
        }

        n=n/10;
    }

        printf("Sum of all odd Number=%d\n",sum);

        return 0;
}
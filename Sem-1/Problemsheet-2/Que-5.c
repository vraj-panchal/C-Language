#include<stdio.h>
int main()
{
    int i,n,c,sum,temp,digit;

    printf("Enter the number ");
    scanf("%d",&n);

    temp=n;

    for(i=0;i<n;i++)
    {
        digit=n%10;
        c=digit*digit*digit;
        sum=sum+c;
        n=n/10;
    }

    if(temp==sum)
    {
        printf("It is a Armstong Number");
    }
    else
    {
        printf("It is Not Armstong Number");
    }

    return 0;
}
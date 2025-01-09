#include<stdio.h>
int main()
{
    int i,n,count;

    printf("Enter the Number ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }

    if(count==2)
    {
        printf("It is a prime Number");
    }

    else
    {
        printf("It is Not prime Number");
    }
       
    return 0;
}
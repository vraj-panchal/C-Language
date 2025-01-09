#include<stdio.h>
int main()
{
    int n,i,fact=1;

    printf("Enter number ");
    scanf("%d",&n);

    if(n<0)
    {
        printf("Error ! Factorial of a negative number doesn't exist. ");
    }
    else
    {
        for(i=1;i<=n;i++)
        {
            fact=fact*i;
        }

        printf("factorial of %d\n",fact);
    }

    return 0;
}
#include<stdio.h>
int main()
{
    int i,n,n1=0,n2=1,n3;

    printf("Enter the Number ");
    scanf("%d",&n);

    for(i=0;i<=n;i++)
    {
        if(i<=1)
        {
            n3=1;
        }

        else
        {
            n3=n1+n2;
            n1=n2;
            n2=n3;
        }
        printf("%d",n3);
    }

    return 0;
}
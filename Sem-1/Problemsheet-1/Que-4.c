#include<stdio.h>
int main()
{
    int n1,n2,n3;

    printf("Enter the value n1 ");
    scanf("%d",&n1);
    printf("Enter the value n2 ");
    scanf("%d",&n2);
    printf("Enter the value n3 ");
    scanf("%d",n3);

    if(n1>n2  && n1>n3)
    {
        printf("n1 is largest number");
    }
    else if(n2>n1 && n2>n3)
    {
        printf("n2 is largest number");
    }
    else if(n3>n1 && n3>n2)
    {
        printf("n3 is largest number");
    }
    else 
    {
        printf("Bouth are Equal");
    }
    return 0;

}
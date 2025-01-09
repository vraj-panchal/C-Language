
#include<stdio.h>
int main()
{
    int i,num,f=1;

    printf("Enter the number.");
    scanf("%d",&num);

    for(i=1;i<=num;i++)
    {
        f*=i;
    }
    printf(" Your numbers(%d)factorials are %d .",num,f);
    return 0;

}  

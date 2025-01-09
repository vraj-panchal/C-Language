#include<stdio.h>
int main()
{
    int year;

    printf("Enter your year ");
    scanf("%d",&year);

    if(year%4==0)
    {
        printf(" is a leep year" );
    }
    else
    {
        printf(" is not a leep year" );
    }

    return 0;
}
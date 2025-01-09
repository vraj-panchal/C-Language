#include<stdio.h>
int main()
{
    float tem;
    printf("Enter the temperature in fahrenheit degrees ");
    scanf("%f",&tem);

    if(tem>=40)
    {
        printf("The Atmosphere is very hot ");
    }
    else if(tem<40 && tem>=37)
    {
        printf("The Atmosphere is hot");
    }
    else if(tem<37 && tem>=34)
    {
        printf("The Atmosphere is Warm ");
    }
    else 
    {
        printf("The Atmosphere is Cool ");
    }

    return 0;
}
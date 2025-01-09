#include<stdio.h>
int main()
{
    float c,f;

    printf("Enter temperature in Fahrenheit ");
    scanf("%f",&f);

    c=5/9*(f-32);

    printf("%f\n,%f",f,c);

    return 0;
}
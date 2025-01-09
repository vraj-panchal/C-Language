#include<stdio.h.>
int main()
{
    float p,r,n,si;

    printf("Enter The value P");
    scanf("%f",&p);
    printf("Enter The value R");
    scanf("%f",&r);
    printf("Enter The value n");
    scanf("%f",&n);

    if(p<0 || r<0 || n<0)
    {
        printf("Error");
    }

    else
    {
        si=p*r*n/100;

        printf("%f",si);
    }

    return 0;


}
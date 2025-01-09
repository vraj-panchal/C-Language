#include<stdio.h>
int main()
{
    int A,B,C,D,E;
    float Per;

    printf("Enter the Mark Subjrct 1");
    scanf("%d",&A);
    
    printf("Enter the Mark Subjrct 2");
    scanf("%d",&B);
    
    printf("Enter the Mark Subjrct 3");
    scanf("%d",&C);
    
    printf("Enter the Mark Subjrct 4");
    scanf("%d",&D);
    
    printf("Enter the Mark Subjrct 5");
    scanf("%d",&E);

    Per=(A+B+C+D+E)*100/500;

    if(Per>=60)
    {
        printf("First Class");
    }
    
    else if(Per>=50 && Per)
    {
        printf("Second Class");
    }

    else if(Per>40 && Per<49)
    {
        printf("Third Class");
    }

    else if(Per<=40)
    {
        printf("Fail");
    }
    else 
    {
        printf("Error");
    }
       return 0;
}
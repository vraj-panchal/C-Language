#include<stdio.h>
int main()
{
    int num1 , num2 , num3 , len1 = 0 , len2 = 0;
    //input of string size
    printf("Enter zise of 1 string :");
    scanf("%d",&num1);
    printf("Enter zise of 2 string :");
    scanf("%d",&num2);
    
    num3 = num1+num2;
    char str1[num1], str2[num2] , str3[num3];

    //input of string value
    printf("Enter 1 string value : ");
    scanf(" %s",str1);
    printf("Enter 2 string value : ");
    scanf(" %s",str2);

    //process
    //length counting
    for(int i = 0 ; str1[i] != '\0' ; i++)
    {
        len1++;
    }
    for(int i = 0 ; str2[i] != '\0' ; i++)
    {
        len2++;
    }
    //tranfer 1 string to 3string
    int b = 0;
    for(int i = 0 ; i < len1 ; i++)
    {
        str3[b] = str1[i];
        b++;
    }
    
    //tranfer 2 string to 3string
    for(int j = 0 ; j < len2 ; j++)
    {
        str3[b] = str2[j];
        b++;
    }
    //null terminal
    str3[b] = '\0';
    //output
    printf("concatenate string is : %s",str3);
    return 0;
}
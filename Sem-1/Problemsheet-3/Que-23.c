
#include<stdio.h>
int main()
{
    int i,p,size;

    printf("enter the size of string:\n");
    scanf("%d",&size);

    char str[size];

    printf("Enter the string:\n");
    scanf("%s",str);
    
    printf("Your entered string is:\n");
    printf("%s\n",str);

    printf("Which character do you want to deleat form the string: \n");
    scanf("%d",&p);

    if(p>size || p<=0)
    {
        printf("Enter the valid position of character :\n");
    }
    else
    {
        for(i=p-1;i<size-1;i++)
        {
            str[i]=str[i+1];
        }
    }
    printf("Your prossecd string is:");
    for(i=0;i<size-1;i++)
    {
        printf("%c",str[i]);
    }
    

    return 0;
}

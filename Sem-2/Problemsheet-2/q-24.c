// Write user defined function that reads a records from “student.dat” file and count number of records present 
// in the file. (student.dat file contains ({rollno, name,percentage} )


#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct student
{
    int rollno ;
    char name[10];
    float percentage;

}s[5];

void printmenu()
{

    printf("\n 1. INSERT STUDENT DATA : \n");
    printf(" 2. DISPLAY STUDENT DATA : \n");
    printf(" 3. COUNT THE TOTAL RECORD OF STUDENT : \n");
    printf(" 4. EXIT...");


}
void insert()
{

        FILE *fp;

        fp=fopen("student.dat","a");

            for(int i=0 ; i<5 ; i++)
            {
                printf("\nEnter Roll No : ");
                    scanf("%d",&s[i].rollno);

                printf("Enter Name : ");
                    scanf("%s",s[i].name);

                printf("Enter Percentage : ");
                    scanf("%f",&s[i].percentage);

                fwrite(&s[i] , sizeof(s[i]) , 1 ,fp);
            }
        fclose(fp);
}

void display()
{
    FILE *fp;

        fp=fopen("student.dat","r");

            printf("\n\t ROLL NO \t NAME \t PERCENTAGE\n");

                for(int i=0 ; i<5 ; i++)
                {
                    while(fread(&s[i] , sizeof(s[i]) , 1 , fp))
                    {
                        printf("\t %d \t\t %s \t %f\n ",s[i].rollno,s[i].name,s[i].percentage);
                    }
                }
                
        fclose(fp);

}


int count()
{
    FILE *fp;

    
    int count = 0;
    fp = fopen("student.dat","r");
    
    for(int i=0 ; i<5 ; i++)

    {
        while(fread(&s[i], sizeof(s[i]), 1, fp))
        {
            count++;
        }
    }

    fclose(fp);
    return count;
}


int main()
{
    int choice;

    do {
        printmenu();

            printf("ENter Your choice : ");
                scanf("%d",&choice);

                switch (choice)
                {
                case 1:

                        insert();           
                    break;

                case 2:

                        display();
                    break;
                
                case 3:

                        printf("Total Student Records  %d : ",count());
                    break;

                case 4:

                        printf("EXIT THIS PROGRAM THANK YOU : ");
                    
                    exit(0);
                
                default:

                        printf("Invalid Choice");

                    break;
                }

                
    }
        while(1);

    
    return 0;


}
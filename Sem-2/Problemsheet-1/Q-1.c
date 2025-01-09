// Define a structure named Census with the following three members:
// - city name
// - population of the city
// - literacy level
//  Write a program to perform following tasks:
// -To read details for 10 city
// - To sort the list alphabetically
// -To sort the list based on literacy level
// -To sort the list based on population
// - To display sorted list

/*
 * p1.c
 *
 *  Created on: 31-Jan-2024
 *      Author: root
 */
#include<stdio.h>
struct Census{
	char city_name[30];
	int population;
	float literacy;
}c[10];
int main(){
	int i,j;
	for(i=0;i<10;i++){
		printf("Enter the city name.\n");
		scanf("%s",c[i].city_name);
		printf("Enter the population of city.\n");
		scanf("%d",&c[i].population);
		if(c[i].population<0){
			printf("Enter valid Population.\n");
			return 0;
		}
		printf("Enter the literacy level of city.\n");
		scanf("%f",&c[i].literacy);

	}
	printf("\nCity_name\tPopulation\tLiteracy_level");
	for(i=0;i<10;i++){
		printf("\n%s\t\t%d\t\t%f",c[i].city_name,c[i].population,c[i].literacy);
	}
	struct Census c_temp;
	struct Census l_temp;
	struct Census p_temp;
	int choice;
	printf("\n");

	again:

	printf("\nEnter your choice.\nPress '1' for alphabetic shorting.\n Press '2' for literacy wise shorting.\n Press '3'for Population wise shorting.");
	scanf("%d",&choice);
	if(choice == 1 || choice == 2 || choice == 3){
		switch (choice){
		case 1:
			for(i=0;i<10;i++){
				for(j=i+1;j<10;j++){
					int k=0;
					while(c[i].city_name == 0 && c[j].city_name == 0 && c[i].city_name[k]!='\0' && c[j].city_name[k]!='\0'){
						k++;
					}
					if(c[i].city_name[k]<c[j].city_name[k]){
						c_temp=c[i];
						c[i]=c[j];
						c[j]=c_temp;
					}
				}
			}
			printf("\nCity_name\tPopulation\tLiteracy_level");
				for(i=0;i<10;i++){
					printf("\n%s\t\t%d\t\t%f",c[i].city_name,c[i].population,c[i].literacy);
				}
				break;
		case 2:
			for(i=0;i<10;i++){
				for(j=i+1;j<10;j++){
					if(c[i].literacy<c[j].literacy){
						l_temp=c[i];
						c[i]=c[j];
						c[j]=l_temp;
					}
				}
			}
				printf("\nCity_name\tPopulation\tLiteracy_level");
		     		for(i=0;i<10;i++){
						printf("\n%s\t\t%d\t\t%f",c[i].city_name,c[i].population,c[i].literacy);
     		}
		     break;
		case 3:
			for(i=0;i<10;i++){
			    for(j=i+1;j<10;j++){
					if(c[i].population<c[j].population){
						p_temp=c[i];
						c[i]=c[j];
						c[j]=p_temp;
				}
			}
		}
			printf("\nCity_name\tPopulation\tLiteracy_level");
		     	for(i=0;i<10;i++){
					printf("\n%s\t\t%d\t\t%f",c[i].city_name,c[i].population,c[i].literacy);
			}
		     	break;
		default :{
			printf("Enter valid choice!\n");
		}
		}
	}
	else{
		printf("Enter valid choice!");
	}
		goto again;
	return 0;
}


/*
 * p14.c
 *
 *  Created on: 09-Feb-2024
 *      Author: root
 */
#include<stdio.h>
struct date{
	int d,m,y,cd,cm,cy;
};
int age(struct date a);
int age(struct date a){

		int age;
		age=(a.cd-a.d);
		printf("Days: %d ",(age));
		age=-(a.cm-a.m);
        printf("Month: %d ",(age));
        age=a.cy-a.y;
        printf("Year: %d ",(age));
}
int main(){
	struct date a;
	printf("enter birth date.\n");
	scanf("%d %d %d",&a.d,&a.m,&a.y);
	printf("enter current date.\n");
		scanf("%d %d %d",&a.cd,&a.cm,&a.cy);
		age(a);
		return 0;
}

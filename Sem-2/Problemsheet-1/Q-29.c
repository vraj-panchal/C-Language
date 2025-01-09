
/*
 * p29.c
 *
 *  Created on: 09-Feb-2024
 *      Author: root
 */
#include<stdio.h>
int sum(int);
int main(){
	int n;
	printf("Enter the number.\n");
	scanf("%d",&n);
	if(n<0){
		printf("Enter valid number.\n");
		return 0;
	}
	int Total=sum(n);
	printf("Total = %d",Total);
	return 0;
}
int sum(int n){
	static int i=0;
	if(n>0){
		i=i+n;
		sum(n-1);
	}
	return i;
}

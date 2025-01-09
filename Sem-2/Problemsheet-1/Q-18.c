
/*
 * p18.c
 *
 *  Created on: 12-Feb-2024
 *      Author: root
 */


#include<stdio.h>
void input_output(int m,int n,int [][n]);
void contprime(int m,int n,int [][n]);
int main(){
	int m,n;
	printf("Enter the size of row .\n");
	scanf("%d",&m);
	printf("Enter the size of column .\n");
	scanf("%d",&n);
	int a[m][n];
	input_output(m,n,a);
	contprime(m,n,a);
	return 0;
}
void input_output(int m,int n,int x[m][n]){
	int i,j;
	printf("Enter the array elements");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d",&x[i][j]);
		}
	}
	printf("Your array elements are : \n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%d",x[i][j]);
		}
		printf("\n");
	}
}
void contprime(int m,int a,int x[m][a]){
	int i,j,n,flag,k,cont=0;
	for(i=0;i<m;i++){
		for(j=0;j<a;j++){
			n=x[i][j];
			flag=0;
			for(k=2;k<n;k++){
				if(n%k==0){
					flag=1;
					break;
				}
			}
			if(flag==0){
				printf("%d is prime.\n",n);
				cont++;

			}
		}
	}
	printf(" There are %d prime numbers.\n",cont);
	return ;
}

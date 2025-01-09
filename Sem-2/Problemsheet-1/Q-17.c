
/*
 * p17.c
 *
 *  Created on: 14-Feb-2024
 *      Author: root
 */
#include<stdio.h>
struct time{
    int hours;
    int minute;
    int second;
}U;

struct time input(void);
void print(struct time);
int isTimeValid(struct time);

struct time input(void){
    printf("Enter hours.\n");
    scanf("%d",&U.hours);
    printf("Enter Minute.\n");
    scanf("%d",&U.minute);
    printf("Enter second.\n");
    scanf("%d",&U.second);
    return U;
}

void print(struct time U){
    printf("Hours : Minute : second\n");
    printf("%d    :   %d   :     %d \n",U.hours,U.minute,U.second);
    return ;
}

int isTimeValid(struct time U){
    if(U.hours>=1 && U.hours<=24){

        if(U.minute>=0 && U.minute<=60){

            if(U.second>=0 && U.second<=60){
                return 0;
            }
            else{
                return 1;
            }
        }
        else{
            return 1;
        }
    }
    else{
        return 1;
    }

}

int main(){
    struct time T;
    T=input();
    print(T);
    int t;
    t=isTimeValid(T);
    if(t == 0){
        printf("Time is valid.\n");
    }
    else{
        printf("Enter valid time...!\n");
    }
    return 0;
}

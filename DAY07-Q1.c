//Write a program to input a year and check whether it is a leap year or not using conditional statements.

#include <stdio.h>
int main(){
    int x;
    scanf("%d",&x)
    if((x%4)==0){
        printf("It is a leap year");
    }
    else{
        printf("it is not a leap year");
    }
    return 0;
}
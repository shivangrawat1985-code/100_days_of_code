//Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.

#include <stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    if(x>0){
        printf("It is positive int");
        
    }
    else if(x<0){
        printf("It is negetive int");
    }
    else{
        printf("It is zero ");
    }
    return 0;
}
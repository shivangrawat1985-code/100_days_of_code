//Write a program to input an integer and check whether it is even or odd using if–else.

#include <stdio.h>
int main(){
    int x;
    
    scanf("%d",&x);
    if((x%2)==0){
        printf("It is even");
        
    }
    else{
        printf("It is odd");
    }
    return 0;
}
//Write a program to input three numbers and find the largest among them using if–else.


#include <stdio.h>
int main(){
    int i1, i2, i3;
    scanf("%d,%d,%d",&i1,&i2,&i3);
    if(i1 > i2 && i1 > i3){
        printf("%d is greatest among 3 numbers",i1);
    }
    else if(i2 > i1 && i2 > i3){
        printf("%d is greatest among 3 numbers",i2);
    }
    if(i3 > i2 && i3 > i1){
        printf("%d is greatest among 3 numbers",i3);
    }
    return 0;
}
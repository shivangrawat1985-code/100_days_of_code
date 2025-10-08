//Write a program to assign grades based on a percentage input.

#include <stdio.h>
int main(){
    int ip;
    scanf("%d",&ip);
    if(ip>82){
        printf("Grade A");
    }
    else if(ip>68){
        printf("Grade B");
    }
    else if(ip>50){
        printf("Grade D");
    }
    else{
        printf("Grade f");
    }
    return 0;
}
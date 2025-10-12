//Write a program to print numbers from 1 to n.

#include <stdio.h>
int main(){
    int n,a;
    printf("enter you number: \n");
    scanf("%d",&n);
    
    for(a=1;a<=n;a++){
        printf("%d\n",a);
        
    }
    return 0;
}
//Write a program to calculate the factorial of a number.



#include <stdio.h>
int main(){
    int n,a,factorial;
    factorial=1;
    printf("enter you number: \n");
    scanf("%d",&n);
    
    for(a=1;a<(n+1);a++){
       factorial=factorial*a;
      }
     printf("factorial of %d is %d\n",n,factorial);
    return 0;
}
//Write a program to print the product of even numbers from 1 to n.


#include <stdio.h>
int main(){
    int n,a,sum;
    sum=0;
    printf("enter you number: \n");
    scanf("%d",&n);
    
    for(a=0;a<(n+1);a++){
       if((a%2)==0){
           sum=sum+a;
       }
      
       
      }
     printf("sum is %d\n",sum);
    return 0;
}
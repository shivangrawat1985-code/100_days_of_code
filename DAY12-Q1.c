/*Write a program to calculate library fine based on late days as follows:
First 5 days late: ₹2/day
Next 5 days late: ₹4/day
Next 20 days days late: ₹6/day
More than 30 days: Membership Cancelled.
*/

#include <stdio.h>
int main(){
    int input_days,f,n,nn;
    scanf("%d",&input_days);
    
    f=2*input_days;
    nn=((5*2)+(5*4))+(input_days-10)*6;
    n=((5*2)+(input_days-5)*4);
    
    
    if(input_days<=5){
        printf("your total fine is %d",f);
    }
    else if(input_days>5 && input_days<11){
        printf("YOur total fine is %d",n);
    }
    else if(input_days>10 && input_days<31){
        printf("your total fine is %d",nn);
    }
    else{
        printf("membership Cancelled");
    }
    return 0;
}
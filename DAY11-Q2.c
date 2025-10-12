//Write a program to find profit or loss percentage given cost price and selling price.

#include <stdio.h>
int main(){
    float cp,sp,a,b;
  
    scanf("%f,%f",&cp,&sp);
    
    a=sp-cp;
   
    
    
    if(a>0){
        b=(a/cp)*100;
        
        printf("Profit  is %.0f %%",b);
    }
    else if(a<0){
       a=-a;
        b=(a/cp)*100;
        printf("Loss  is %.0f %%",b);
    }
    else{
        printf("neither profit nor loss");
    }
    return 0;
}
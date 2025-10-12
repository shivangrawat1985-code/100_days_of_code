/*Write a program to implement a basic calculator using switch-case for +, -, *, /, %.*/


#include <stdio.h>
int main(){
    
    int a, b;
    char op;

   
    printf("Enter two numbers separated by a space: ");
   
    scanf("%d %d", &a, &b);

    printf("Enter an operator (+, -, *, /, %%): ");
    
    scanf(" %c", &op);
    
    
    
    switch(op){
        case '+':
        printf("Addition of %d and %d is %d",a,b,(a+b));
        break;
        
        case '-':
         printf("Subtraction of %d and %d is %d",a,b,(a-b));
        break;
        
         case '*':
         printf("Multiplication of %d and %d is %d",a,b,(a*b));
        break;
        
         case '/':
         if(b==0){
             printf("zero div not allowed");
         }
         else{
         printf("division of %d and %d is %d",a,b,(a/b));}
         
        break;
        
         case '%':
          if(b==0){
             printf("zero div not allowed");
         }
         else{
         printf("modulus of %d and %d is %d",a,b,(a%b));}
        break;
        
        default:
         printf("higher version of calculator is required");
        
    }
    
    
     return 0;
    
    }
   

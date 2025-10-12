/*Write a program to calculate electricity bill based on units consumed with these rates:
First 100 units at ₹5/unit
Next 100 units at ₹7/unit
Next 100 units at ₹10/unit
Above at ₹12/unit
*/

#include <stdio.h>
int main(){
    int input_units,f,n,nn,abv;
    scanf("%d",&input_units);
    
    f=5*input_units;
    nn=((100*5)+(100*7))+(input_units-200)*10;
    n=((100*5)+(input_units-100)*7);
    abv=((100*5)+(100*7)+(100*10))+(input_units-300)*12;
    
    
    if(input_units <101){
        printf("your total bill is %d",f);
    }
    else if(input_units>100 && input_units<201){
        printf("YOur total bill is %d",n);
    }
    else if(input_units>200 && input_units<301){
        printf("your total bill is %d",nn);
    }
    else if(input_units>300){
        printf("your bill is %d",abv);
    }
    return 0;
}
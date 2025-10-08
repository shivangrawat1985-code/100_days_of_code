//Write a program to find the roots of a quadratic equation and categorize them.

#include <stdio.h>
#include <math.h>
int main(){
    float d, a, b, c, e, r1, r2;
    
    scanf("%f,%f.%f",&a,&b,&c);
    d=((b*b)-(4*a*c));
    
    e=0;
  
    if(d == 0 ){
        printf("both roots are same\n");
        e=1;
    }
    else if( d > 0 ){
        printf("two diff root\n");
        e=2;
    }
    else{
        printf("no real root");
    }
    
    if(e==1){
        r1 = -b / (2 * a);
        printf("%d",r1);
    }
    else if(e==2){
        r1 = -b / (2 * a);
        printf("%d",r1);
        r2 = +b / (2 * a);
        printf("%d",r2);
    }
    return 0;
}
//Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.



#include <stdio.h>
int main(){
    int ab, bc, ac, x, y, z ;
    scanf("%d,%d,%d",&ab,&bc,&ac);
 x=(ab+bc)>ac;
 y=(bc+ac)>ab;
 z=(ac+ab)>bc;
 
 
 if (x==1&&y==1&&z==1){
     printf("it is a triangle\n");
     
     if(ab==bc&&bc==ac){
          printf("it is equilateral triangle");
     }
     else if(ab==bc||bc==ac||ab==ac){
         printf("It is iso triangle");
     }
     else{
         printf("it is not a triangle");
     }
 }
 else{
     printf("it is not a triangle");
 }
 return 0;
}
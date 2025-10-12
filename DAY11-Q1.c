//Write a program to display the month name and number of days using switch-case for a given month number.

#include <stdio.h>

int main() {
    int enter_num;
    scanf("%d",&enter_num);
    switch (enter_num){
    case 1:
    printf("January , 31");
    break;
    
    case 2:
    printf("Feburary , 29");
    break;
    case 3:
    printf("march , 31");
    break;
    case 4:
    printf("april , 30");
    break;
    case 5:
    printf("may , 31");
    break;
    case 6:
    printf("june , 30");
    break;
    case 7:
    printf("july , 31");
    break;
    case 8:
    printf("August , 31");
    break;
    case 9:
    printf("september , 30");
    break;
    case 10:
    printf("october , 31");
    break;
    case 11:
    printf("november , 30");
    break;
    case 12:
    printf("december , 31");
    break;
    
}
return 0;

}

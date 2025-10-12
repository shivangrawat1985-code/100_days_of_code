/*
 * Write a program to reverse a given number.
 * For example, if the input is 1234, the output should be 4321.
 */

#include <stdio.h>

int main() {
    int number;          
    int reversed_number = 0; 
    int remainder;          

    printf("Enter an integer to reverse: ");
    scanf("%d", &number);

  
    int original_number = number;

    while (number != 0) {
       
        remainder = number % 10;
        reversed_number = reversed_number * 10 + remainder;
        
        number = number / 10;
    }

    printf("The reverse of %d is %d\n", original_number, reversed_number);

    return 0;
}


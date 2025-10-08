//Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.

#include <stdio.h>
int main(){
    char input_character;
    scanf("%c",&input_character);
    if(input_character >= 'A' && input_character < 'Z'){
        printf("It is UPPERCASE");
    }
    else if(input_character >= 'a' && input_character < 'z'){
        printf("It is lowercase");
        
    }
    else if(input_character >= '0' && input_character <= '9'){
        printf("it is number");
    
    }
    else{
        printf("it is spl. charcater");
    }
    return 0;
}
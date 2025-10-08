//Write a program to input a character and check whether it is a vowel or consonant using if–else.


#include <stdio.h>

int main() {
    int i,length,found ;
    found=0;
	char input_variable ;
	int ascii_array[10]={97,101,105,111,117,65,69,73,79,85};
	
	scanf("%c", &input_variable);
	
	length= sizeof(ascii_array) / sizeof(ascii_array[0]);
	
	for(i = 0 ; i<length; i++){
	    
	   
	    if(input_variable == ascii_array[i]){
	        found=1;
	    }
	  
	}
	if(found==1){
	    printf("%c is an vowel");
	}
	else{
	    printf("It is a consonent");
	}
	

}

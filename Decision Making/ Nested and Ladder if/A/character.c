#include<stdio.h>

 void main(){
 	char ch;
 	printf("Enter letter or number:");
 	scanf("%c",&ch);
 	if(ch>='a'&&ch<='z'){
 		printf("the letter is lower case.");
	 }
	 else if(ch>='A'&&ch<='Z'){
 		printf("the letter is upper case.");
 	}
 	else if(ch>='0'&&ch<='9'){
 		printf("This is number.");
 	}
 	else{
 		printf("This is special character.");
	 }
 }

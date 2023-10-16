#include<stdio.h>

 void main(){
 	int a;
 	printf("Write a number:");
 	scanf("%d",&a);
 	 if(a&1){
 	 	printf("The number %d is odd.",a);
	  }
	 else{
	 	printf("The number %d is even.",a);
	 }
 }

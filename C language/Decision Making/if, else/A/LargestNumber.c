#include<stdio.h>

 void main(){
 	int a,b,c;
 	printf("First_number:");
 	scanf("%d",&a);
 	printf("\nSecond_number:");
 	scanf("%d",&b);
 	printf("\nThird_number:");
 	scanf("%d",&c);
 	
 	if(a>b){
 		if(a>c){
 			printf("%d is largest number",a);
		 }
		else{
			 if(c>b){
			 	printf("%d is largest number",c);
			 }
			 else{
			 	printf("%d is largest number",b);
			 }
		}
	 }
	else{
		if(b>c){
			printf("%d is largest number",b);
		}
		else{
             if(c>a){
             	printf("%d is largest number",c);
			 }
			 else{
			 	printf("%d is largest number",a);
			 }
		}
	} 
 }

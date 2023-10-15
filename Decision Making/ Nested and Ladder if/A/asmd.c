#include<stdio.h>

 void main()
 {
 	float a,b,ans;
 	char C;
 	printf("write first number:");
 	scanf("%f",&a);
 	printf("Enter sign:");
 	scanf(" %c",&C);
 	printf("write second number:");
 	scanf("%f",&b);
 	if(C=='+'){
 	 	ans=a+b;
	  }
	 else if(C=='-'){
	 	ans=a-b;
	 } 
	 else if(C=='*'){
	 	ans=a*b;
	 }
	 else if(C=='/'){
	 	ans=a/b;
	 }
	 else{
	 	printf("Invalid");
	 }
	 printf(" ANS=%f",ans);
 }

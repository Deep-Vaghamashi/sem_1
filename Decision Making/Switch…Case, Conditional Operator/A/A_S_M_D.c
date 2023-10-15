#include<stdio.h>

 void main(){
 	int n1,n2,ans;
 	char c;
 	printf("Enter first number:");
 	scanf("%d",&n1);
 	printf("Enter the sign:");
 	scanf(" %c",&c);
 	printf("Enter second number:");
 	scanf("%d",&n2);
 	
 	switch(c){
 		case '+':ans=n1+n2;
 		printf("ANS=%d",ans);
 		break;
		case '-':ans=n1-n2;
 		printf("ANS=%d",ans);
 		break;
		case '*':ans=n1*n2;
 		printf("ANS=%d",ans);
 		break;
		case '/':ans=n1/n2;
 		printf("ANS=%d",ans);
		break; 
	}
 }

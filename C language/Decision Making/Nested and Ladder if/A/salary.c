#include<stdio.h>

 void main(){
 	float bs,hra,da,gs;
 	printf("Enter basic salary of an employee:");
 	scanf("%f",&bs);
 	if(bs>=10000&&bs<=20000){
 		hra=bs*0.2;
 		printf("The HRA of the salary is:%f",hra);
		da=bs*0.8;
 		printf("\nThe DA of the salary is:%f",da);
	}
	else if(bs>=20000&&bs<=30000){
 		hra=bs*0.25;
 		printf("The HRA of the salary is:%f",hra);
		da=bs*0.9;
 		printf("\nThe DA of the salary is:%f",da);
	}
	else if(bs>=30000){
 		hra=bs*0.3;
 		printf("The HRA of the salary is:%f",hra);
		da=bs*0.95;
 		printf("\nThe DA of the salary is:%f",da);
	}
	printf("\nthe gross salary is:%f",gs=bs+hra+da);
 }

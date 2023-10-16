#include<stdio.h>

 void main(){
 	int a;
 	printf("Write the number:");
 	scanf("%d",&a);
 	a=a<<1;
 	printf("The value is %d",a);
 	a=a>>2;
 	printf("\nThe value is %d",a);
 }

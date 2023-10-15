#include<stdio.h>

 void main(){
 	float a,b,c;
 	printf("First Number:");
 	scanf("%f",&a);
 	printf("\nSecond Number:");
 	scanf("%f",&b);
 	c=a;
 	a=b;
 	b=c;
 	printf("\nFirst Number:");
 	printf("%f",a);
 	printf("\nSecond Number:");
 	printf("%f",b);
 	
 	int A,B;
 	printf("\n\nFirst_Number:");
 	scanf("%d",&A);
 	printf("\nSecond_Number:");
 	scanf("%d",&B);
 	A=A+B;
	B=A-B;
	A=A-B;
	printf("\nFirst_Number:");
 	printf("%d",A);
 	printf("\nSecond_Number:");
 	printf("%d",B);
}

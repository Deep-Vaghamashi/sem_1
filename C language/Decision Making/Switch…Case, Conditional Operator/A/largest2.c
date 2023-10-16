#include<stdio.h>
 void main(){
 	int a,b,c;
 	printf("Enter the three number:");
 	scanf("%d %d %d",&a,&b,&c);
 	(a>b)&&(a>c)?printf("%d",a):(c>b)?printf("%d",c):printf("%d",b);
 }

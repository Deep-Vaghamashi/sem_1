#include<stdio.h>
 void main(){
 int b,p,a=1,i=1;
 printf("Enter the value of base:");
 scanf("%d",&b);
 printf("Enter the value of power:");
 scanf("%d",&p);
 while(i<=p){
 	a=a*b;
 	i++;
 }
 if(p==0){
 	printf("1");
 }
 else{
 	 printf("%d",a);
  }
 }

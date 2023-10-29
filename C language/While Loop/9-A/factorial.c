#include<stdio.h>
 void main(){
int n,i=1,a=1;
printf("Enter the factorial of the number:");
scanf("%d",&n);
 while(i<=n){
	a=a*i;
	i++;
 }
printf("%d",a);
}

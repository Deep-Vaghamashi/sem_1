#include<stdio.h>
 void main(){
 	int n,a=0,b=0,i=1;
 	while(i<=10){
 	printf("Enter value_%d:",i);
 	scanf("%d",&n);
 		if(n%2==1){
 			a++;
		 }
		else{
			b++;
		}
		i++;
	 }
	 printf("The number of odd number is %d.\n",a);
	 printf("The number of even number is %d",b);
 }

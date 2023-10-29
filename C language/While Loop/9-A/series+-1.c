#include<stdio.h>
 void main(){
 int n,i=1,sum=0;
 printf("Series:1-2+3-4+5-...n\n");
 printf("Enter the n_th term:");
 scanf("%d",&n);
 while(i<=n){
 	if(i%2==1){
 		sum=sum+i;
	 }
	 else{
	 	sum=sum-i;
	 }
	 i++;
 }
 printf("sum of series=%d",sum);
 }


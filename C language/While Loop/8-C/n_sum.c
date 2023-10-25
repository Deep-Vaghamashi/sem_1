#include<stdio.h>
 void main(){
 int i=1,n,count=1,sum=0,a=0;
 printf("Series:1+4+9+16+...+n.\n");
 printf("Enter the n_th term:");
 scanf("%d",&n);
 while(count<=n){
 	a=i+a;
 	i+=2;
 	sum=sum+a;
 	count++;
 }
 printf("%d",sum);
}

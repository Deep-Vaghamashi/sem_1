#include<stdio.h>
int max(int,int);
int min(int,int);
void main(){
	int a,b;
	printf("Enter the number:");
	scanf("%d",&a);
	printf("Enter the number:");
	scanf("%d",&b);
	int M1=max(a,b);
	int m1=min(a,b);
	printf("max=%d",M1);
	printf("min=%d",m1);
}
int max(int q,int w){
	return (q>w)?q:w;
}
int min(int q,int w){
	return (q>w)?q:w;
}



#include<stdio.h>
	int sum(int,int);
void main(){
	int n1,n2;
	printf("Enter the no.:");
	scanf("%d",&n1);
		printf("Enter the no.:");
	scanf("%d",&n2);
	int sum1=sum(n1,n2);
	printf("your sum is %d",sum1);
}
int sum(int a,int b){
	int sum;
	sum=a+b;
	return sum;
}


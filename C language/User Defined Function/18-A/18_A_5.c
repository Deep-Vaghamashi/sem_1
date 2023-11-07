#include<stdio.h>
int swap(int,int);
void main(){
	int n,m;
	printf("Enter the number:");
	scanf("%d",&n);
	printf("Enter the number:");
	scanf("%d",&m);
	int a=swap(n,m);
}
int swap(int n,int m){
	int temp;
	temp=n;
	n=m;
	m=temp;
	printf("%d\n%d",n,m);
	}


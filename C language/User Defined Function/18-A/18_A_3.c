#include<stdio.h>
float simpleint(float pri,float rate,float time){
	return((pri*rate*time)/100.0);
}
void main(){
	float pri,rate,time,interest;
	printf("Enter principal amount:");
	scanf("%f",&pri);
	printf("Enter principal amount:");
	scanf("%f",&rate);
	printf("Enter principal amount:");
	scanf("%f",&time);
    interest=simpleint(pri,rate,time);
    printf("simple interest:%.2f\n",interest);
}


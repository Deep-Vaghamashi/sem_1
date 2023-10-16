#include<stdio.h>
#include<math.h>
 void main(){
 	float a,b,c,d;
 	double a1,b1;
 	printf("Write the value of given fun. ax^2+bx+c=0.");
 	printf("\na=");
 	scanf("%f",&a);
 	printf("\nb=");
 	scanf("%f",&b);
 	printf("\nc=");
 	scanf("%f",&c);
 	d=(b*b)-(4*a*c);
 	double sq=sqrt(abs(d));
 	if(d>0){
 		printf("roots are real and different\n");
 		a1=(-b+sq)/(2*a);
 		b1=(-b-sq)/(2*a);
 		printf("%f %f",a1,b1);
	 }
	else if(d==0){
		printf("roots are real and same\n");
		a1=(-b)/(2*a);
		printf("%f",a1);
	}
	else{
		printf("roots are complex\n");
		a1=(-b)/(2*a);
		b1=sq/(2*a);
		printf("%f +i%f,%f -%f",a1,b1,a1,b1);
	}
 }

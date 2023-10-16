#include<stdio.h>
 void main(){
 	float s1,s2,s3;
 	printf("Enter the value of the three side of the triangle:\n");
 	printf("Side 1:");
 	scanf("%f",&s1);
 	printf("Side 2:");
 	scanf("%f",&s2);
 	printf("Side 3:");
 	scanf("%f",&s3);
 	if(s1!=s2&&s2!=s3&&s1*s1==s2*s2+s3*s3||s2*s2==s3*s3+s1*s1||s3*s3==s1*s1+s2*s2){
 		printf("The triangle is right angle triangle.");
	 }
	else if(s1==s2||s2==s3||s1==s3){
		printf("The triangle is isosceles triangle.");
	}
	else if(s1==s2&&s2==s3){
		printf("The triangle is equilateral triangle.");
	}
	else{
		printf("The triangle is scalene triangle.");
	}
 }

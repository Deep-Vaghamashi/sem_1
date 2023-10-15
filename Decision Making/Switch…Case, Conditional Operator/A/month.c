#include<stdio.h>

 void main(){
 	int n;
 	printf("Enter the number of month:");
 	scanf("%d",&n);
 	switch(n){
 		case 1:printf("jan: 31_days");
 		break;
		case 3:printf("mar: 31_days");
 		break;
		case 5:printf("may: 31_days");
 		break;
		case 7:printf("july: 31_days");
 		break;
		case 8:printf("aug: 31_days");
 		break;
 		case 10:printf("oct: 31_days");
 		break;
 		case 12:printf("dec: 31_days");
 		break;
 		case 4:printf("apr: 30_days");
 		break;
 		case 6:printf("jun: 30_days");
 		break;
 		case 9:printf("sap: 30_days");
 		break;
 		case 11:printf("nov: 30_days");
 		break;
 		case 2:printf("feb: 28_days");
 		break;
	 }
 }

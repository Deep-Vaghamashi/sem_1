#include<stdio.h>
 void main(){
 	int p,m,c,e,com,pr;
 	printf("Enter the mark of given subject.\n");
 	printf("Physics:");
 	scanf("%d",&p);
 	printf("\nMaths:");
 	scanf("%d",&m);
 	printf("\nChemistry:");
 	scanf("%d",&c);
 	printf("\nEnglish:");
 	scanf("%d",&e);
 	printf("\nComputer:");
 	scanf("%d",&com);
 	pr=(p+m+c+e+com)*(100)/500;
 	if(pr<35){
 		printf("FIAL");
	 }
	else if(pr>=36&&pr<=45){
		printf("PASS CLASS");
	}
	else if(pr>=46&&pr<=60){
		printf("SECOND CLASS");
	}
	else if(pr>=61&&pr<=70){
		printf("FIRST CLASS");
	}
	else{
		printf("DISTINCTION");
	}
	printf("\n %d",pr);
 }

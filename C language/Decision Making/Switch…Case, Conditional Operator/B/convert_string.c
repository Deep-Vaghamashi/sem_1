#include<stdio.h>
 void main(){
  char num[100];
  int choice;
  float float_num;
  printf("Enter the number as string:");
  scanf("%s",&num);
  printf("Enter your choice:\n");
  printf("1.convert to integer.\n");
  printf("2.convert to float.\n");
  scanf("%d",&choice);
  switch(choice){
  	case 1: printf("The converted integer is %d\n",atoi(num));
  		break;
  	case 2:  printf("The converted float is %d\n",atof(num));
  		break;
  	default: printf("Invalid choice\n");
  		break;
  		
  }
 }


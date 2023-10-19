#include<stdio.h>
 void main(){
  int a,b,c;
  printf("Enter the first number:");
  scanf("%d",&a);
  printf("Enter the second number:");
  scanf("%d",&b);
  printf("Enter the third number:");
  scanf("%d",&c);
  if(a>b){
  	if(a>c){
  		if(c>b){
  			printf("The second largest number is:%d",c);
		  }
		  else{
		  	printf("The second largest number is:%d",b);
		  }
	  }
	  else{
	  	printf("The second largest number is:%d",a);
	  }
  }
  else{
  	if(b>c){
  		if(c>a){
  			printf("The second largest number is:%d",c);
		  }
		  else{
		  	printf("The second largest number is:%d",a);
		  }
	  }
	  else{
	  	printf("The second largest number is:%d",b);
	  }
  }
}

#include<stdio.h>

 void main(){
  float p,r,tp,i;
   printf("write the principal:");
   scanf("%f",&p);
   printf("\nwrite the ratio:");
   scanf("%f",&r);
   printf("\nwrite the time period:");
   scanf("%f",&tp);
   i=p*r*tp/100;
   printf("\nsimple interest:""%f",i);
 }

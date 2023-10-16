#include<stdio.h>

void main(){
 	int d,yr,mn,wk,dy;
 	printf("Write the number of days:");
 	scanf("%d",&d);
 	yr=d/365;//366/365=1
 	d=d-(yr*365);//366-(1*365)=1
 	wk=d/7;//1/7=0
 	d=d-(wk*7);//1-(0*7)=1
 	dy=d;//1
 	printf("%d year %d week %d day",yr,wk,dy);
 }

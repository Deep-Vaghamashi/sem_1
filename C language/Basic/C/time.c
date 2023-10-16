#include<stdio.h>

 void main(){
 	int s,sec,hr,mn;
 	printf("write the Seconds:");
 	scanf("%d",&s);
 	hr=s/3600;//2/3600=0
 	s=s%3600;//2%3600=2
 	mn=s/60;//2/60=0
 	s=s%60;//2%60=2
 	sec=s;//=2
 	printf("\nThe time of given seconds=%d:%d:%d",hr,mn,sec);
 }

#include<stdio.h>
void main(){
	int year;
	printf("Enter the year:");
	scanf("%d",&year);
	if(year%400==0 || year%4==0){
		printf("The year is leap");
	}
	else if(year % 100==0){
		printf("The Year is not leap");
	}
	else{
		printf("The year is not leap");
	}
}
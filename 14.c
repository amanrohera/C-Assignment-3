#include<stdio.h>
void main(){
	int a,b,c=0,d=0;
	printf("Enter the num:");
	scanf("%d",&a);
	while(a!=0){
		b=a%10;
		c=c*10+b;
		a/=10;
	}	
	printf("The number after reversal is %d",c);
}
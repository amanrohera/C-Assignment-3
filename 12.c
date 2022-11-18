#include<stdio.h>
void main(){
	int a=0,b=1,n,sum,i,d,temp;
	printf("Enter the number:");
	scanf("%d",&n);
	printf("%d\n%d",a,b);
	for(i=3;i<=n;i++){
		d=a+b;
		printf("\n%d",d);
		a=b;
		b=d;
	}	
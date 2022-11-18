#include<stdio.h>
void main(){
	int a,b,c,i,d,o=0;
	printf("Enter the number:");
	scanf("%d",&a);
	o=a;
	while(o!=0){
		b=o%10;
		d+=b*b*b;
		o/=10;
	}
	if(d=a){
		printf("The Num is rmstrong number")
	}
}
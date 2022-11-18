#include<stdio.h>
void main(){
	int a,i,b,c=0;
	
	printf("Enter the ending value");
	scanf("%d",&b);
	for(i=1;i<=b;i++){
		if(i%2==0){
			c=c+1;
		}
	}
	printf("The total even number are:%d",c);
	
}
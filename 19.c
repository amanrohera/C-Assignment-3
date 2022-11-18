#include<stdio.h>
void main(){
	int i,result,num,temp;
	printf("Enter the num:");
	scanf("%d",&num);
	temp=num;
	while(num!=0){
		i=num%10;
		result=result+i;
		num/=10;		
	}
	printf("The Sum of digits is %d",result);
}
#include<stdio.h>
void main(){
	int i,result,num,temp;
	printf("Enter the num:");
	scanf("%d",&num);
	temp=num;
	while(num!=0){
		i=num%10;
		result=result*10+i;
		num/=10;		
	}
	if(temp==result){
		printf("The Number Is Palindrome");
	}
	else{
		printf("The Number Is Not Palindrome");
	}
}
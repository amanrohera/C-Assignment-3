#include<stdio.h>
void main(){
	int base,power,i,result;
	printf("Enter the base:");
	scanf("%d",&base);
	printf("Enter the power:");
	scanf("%d",&power);
	for(i=1;i<power;i++){
		result=base*power;
		power--;
	}
	printf("%d",result);
}
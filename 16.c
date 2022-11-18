#include<stdio.h>
void main() {
	int n,i,flag=0;
	printf("Enter the number");
	scanf("%d",&n);
	for(i=2;i<n;i++){
		if(n%i==0){
			flag=1;
		}
	}
	if(flag!=0){
		printf("The Number Is Not Prime");
	}
	else{
		printf("The Number Is Prime");
	}
}
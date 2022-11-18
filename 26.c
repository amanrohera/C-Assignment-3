#include<stdio.h>
void main(){
	int n,i,j,d=1;
	printf("Enter the num:");
	scanf("%d",&n);
	for(i=1;i<n;i++){
		for(j=1;j<=i;j++){
			printf("%d",d);
			d=d+1;
		}
		printf("\n");
	}
}
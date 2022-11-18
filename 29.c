#include<stdio.h>
void main(){
	int i,j,n,k,d=65;
	printf("Enter the num:");
	scanf("%d",&n);
	for(i=1;i<n;i++){
		for(j=1;j<=i;j++){
		
			printf(" ");
		}
		for(k=i;k<n;k++){
			printf("%c",d);
		}
		d=d+1;
		printf("\n");
		
		
	}
}
		
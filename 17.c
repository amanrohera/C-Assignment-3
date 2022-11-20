#include<stdio.h>
#include<math.h>
void main(){
	int a,b,o=0,d=0,e=0,i;
	printf("Enter the number");
	scanf("%d",&a);
	o=a;
	i=a;
	while(o!=0){
		b=o%10;
		d=d+1;
		o/=10;
	}
	while(i!=0){
		b=i%10;
		e+=pow(b,d);
		i/=10;
	}
	if(a==e){
		printf("The number is armstrong number");
		
	}
	else{
		printf("The Number is not armstrong");
	}
}
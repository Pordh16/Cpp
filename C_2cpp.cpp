#include <stdio.h>

int base , high;
float triangle;

main(){
	printf("Enter Base:");
	scanf("%d",&base);
	
	printf("Enter High:");
	scanf("%d" , &high);
	triangle = 0.5*base*high;
	printf("Base= %d \n High= %d \n Triangle= %.3f", base, high, triangle);
}


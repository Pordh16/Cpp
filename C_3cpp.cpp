#include <stdio.h>

int wide , longe;
float Power;

main(){
	printf("Enter Wide:");
	scanf("%d",&wide);
	
	printf("Enter Longe:");
	scanf("%d" , &longe);
	Power = 0.5*wide*longe;
	printf("Wide= %d \n Longe= %d \n Power= %.3f", wide, longe, Power);
}

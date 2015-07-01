#include <math.h>
#include <stdio.h>

int main (void) {
	float c;
	
	//To avoid rounding error, we have 1 cent = 1 dollar.
	const short denoms[]={1,5,10,25,100,500,1000,2000};
	const char  *names[]={"Penny","Nickel","Dime","Quarter","Dollar Bill","Five Dollar Bill","Ten Dollar Bill","Twenty Dollar Bill"};

	printf("Please enter the amount of change to be computed: ");
	scanf("%f",&c);

	int remainder = c*100;
	int count;
	int denom=8;

	printf("Your change is: ");
	
	while (--denom != -1){
		if (count = remainder/denoms[denom]){
			printf("%s : %i of them\n",names[denom],count;
			remainder-=count*denoms[denom];	
		}
	}
	
	printf("\n\nThat was all.\n\n");
}

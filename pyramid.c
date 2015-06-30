#include <stdio.h>

int main (void) {
	int length;
	
	
		
	printf("How long should the base of the pyramid be: ");
	input:
	scanf("%i",&length);
	if (length<=0 || length >23 ){
		printf("\nToo many or to few rows\n");
		goto input;
	}

	printf("\n\nYour input was taken to mean the the base of the pyramid should be %i units long.\n\n",length);
	
	int i;
	int h;

	
	// Iterate all of the lines of the pyramid: as many lines tall as it is characters wide at the base. 
	
	printf("\n\n h==0 \n\n");

	for (h=2; h != length+1;h++){
		for (i=0;i<length-h;i++){ //First, print all the needed spaces;
			printf(" ");
		}
	
		for (i=0;i<h;i++){ //Then print the hashes
			printf("$");
		}
		printf("\n");
	}

}

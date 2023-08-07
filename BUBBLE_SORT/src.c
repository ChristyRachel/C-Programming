#include <stdio.h>
#include <stdlib.h>
#include "function_lib.h"

int main(void)
{
	int s[]={22,32,9,0,1,2,45,668,932,26,5,3,333,4,7}; // our data array
	size_t N=sizeof(s)/sizeof(int); // number of elements in s

	printf("the original data is:\n");
	dispArray(s, N);
	bsort(s, N);
	printf("the sorted data is:\n");
	dispArray(s, N);
	printf("bubble sort program complete.\n\n");

	return EXIT_SUCCESS;
}

/*
 * largest.c
 *
 *  Created on: Jun. 20, 2020
 *      Author: christy
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	int i;
	int s[10];
	//initialize array with a size 10
	printf("Enter the elements in the array \n");
	// to read the elements in the array
	for (i = 0; i < 10; i++)
		scanf("%d", &s[i]);
	size_t L = sizeof(s) / sizeof(s[0]);

	// to call the function and thereby print the largest element
	printf ( "Largest number is %d \n",findlargestInt(s,L));

	// to exit
	return EXIT_SUCCESS;
}

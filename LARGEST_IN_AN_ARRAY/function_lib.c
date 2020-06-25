/*
 * function_lib.c
 *
 *  Created on: Jun. 20, 2020
 *      Author: christy
 */


#include <stdio.h>
#include <stdlib.h>
#include "function_lib.h"

// function to find the largest value in the array.
int findlargestInt ( int *s, size_t L )
{
	int i;
	int largest = s[0];
	// loop to compare each element to find the larger value
	for( i = 1; i < L; i++)
	{
		if ( s[i] > largest )
			{
				largest = s[i];
			}
	}
	/// to return the largest number
	return largest;
}


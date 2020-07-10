/*
 * function.c
 *
 *  Created on: Jul. 10, 2020
 *      Author: christy
 */


#include<stdio.h>
#include<stdlib.h>
#include "function_lib.h"

/*
 * function to print out the array contents
 */
void dispArray(const int *s, size_t N)
{
	for (size_t i=0; i != N; ++i)
	{
		printf("%d ",s[i]);
	}
	printf("\n");
	return;
}

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

/*
 * function to sort the array
 */
void bsort(int *s, size_t N)
{
	int i, j;
	   for (i=0; i<N-1; i++)
	       for (j = 0; j < N-i-1; j++)
	           if (s[j] > s[j+1])
	              swap(&s[j], &s[j+1]);
	return;
}

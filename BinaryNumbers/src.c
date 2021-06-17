/*
 * src.c
 *
 *  Created on: Jun. 16, 2021
 *      Author: christy
 *      Credits: Geeks for Geeks
 */

#include<stdio.h>
void bin(unsigned n)
{
	unsigned i;
	for (i = 1 << 10; i > 0; i = i / 2)
		(n & i) ? printf("1") : printf("0");
}

int main(void)
{
	bin(19);
	printf("\n");
	bin(4);
}




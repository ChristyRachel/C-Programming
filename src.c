/*
 * src.c
 *
 *  Created on: Jul. 10, 2020
 *      Author: christy
 *      Credits : Takis
 */



#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "stack_lib_function.h"


int main()
{
	/* declare and initialize variables */
	stack_t stack;
	stack.top = 0;

	int loadarr[] = { 52, -29, 36, 1154, 72, 0, 68, 44, 33, 59 };
	size_t L = sizeof(loadarr)/sizeof(int);

	/* load stack */
	size_t i;
	for (i = 0; i != L; ++i)
	{
		printf("stack.top = %zu, ", stack.top);
		push(&stack, loadarr[i]);
		printf("pushing %d\n", loadarr[i]);
	}

	/* pop stack */
	int x;
	while (stack_empty(&stack) == false)
	{
		printf("stack.top = %zu, ", stack.top);
		x = pop(&stack);
		printf("popping %d\n", x);
	}

	/* test error function */
	//x = pop(&stack); /* comment this out to avoid error */
	return EXIT_SUCCESS;
}

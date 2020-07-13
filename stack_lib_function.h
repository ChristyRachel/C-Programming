/*
 * stack_lib_function.h
 *
 *  Created on: Jul. 10, 2020
 *      Author: christy
 *      Credits : Takis
 */

#ifndef STACK_LIB_FUNCTION_H_
#define STACK_LIB_FUNCTION_H_

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define	N	1024

/*
 * struct and typedef declarations
 */
struct stack_struct
{
	int data[N];
	size_t top;
};
typedef struct stack_struct stack_t;


bool stack_empty(stack_t *s);

void push(stack_t *s, int x);

int pop(stack_t *s);

#endif /* STACK_LIB_FUNCTION_H_ */

/*
 * queue_function.h
 *
 *  Created on: Jul. 10, 2020
 *      Author: christy
 *      Credits : Takis
 */

#ifndef QUEUE_FUNCTION_H_
#define QUEUE_FUNCTION_H_

#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>

#define L	1024	// size of integer data structure

bool queue_empty();
void enqueue(int);
int dequeue();

#endif /* QUEUE_FUNCTION_H_ */

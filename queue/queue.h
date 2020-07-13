/*
 * queue.h
 *
 *  Created on: Jul. 10, 2020
 *      Author: christy
 *      Credits: Takis
 */

//#ifndef QUEUE_H_
//#define QUEUE_H_
#ifndef INCLUDES_STACK_H_
#define INCLUDES_STACK_H_

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define	N	1024 // size of integer data structure

/*
 * struct and typedef declarations
 */
struct queue_struct {
	int data[N];
	size_t head;
	size_t tail;
};
typedef struct queue_struct queue_t;

bool queue_empty(queue_t *s);

void enqueue(queue_t *s, int x);

int dequeue(queue_t *s);

#endif /* INCLUDES_STACK_H_ */

//#endif /* QUEUE_H_ */

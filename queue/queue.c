/*
 * queue.c
 *
 *  Created on: Jul. 10, 2020
 *      Author: christy
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "queue.h"

/* *************** FUNCTIONS ***************** */
/*
 * queue_empty() implementation
 */
bool queue_empty(queue_t *s) {
	if (s->head == s->tail) {
		return true;
	} else {
		return false;
	}
}

/*
 * enqueue() implementation
 */
void enqueue(queue_t *s, int x) {
	s->data[(s->tail)++] = x; // add the data to the tail
	return;
}

/*
 * dequeue() implementation
 */
int dequeue(queue_t *s) {
	if (queue_empty(s)) {
		printf("underflow error!"); //if the queue is empty show underflow error
		exit(EXIT_FAILURE);
	} else {
		return (*s).data[(s->head)++]; // else dequeue an element from the head of the queue
	}
}

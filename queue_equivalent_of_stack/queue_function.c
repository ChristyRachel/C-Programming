/*
 * queue_function.c
 *
 *  Created on: Jul. 10, 2020
 *      Author: christy
 *      Credits : Takis
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "queue_function.h"
/*
 * queue_empty(s) implementation
 */

int q[L];// Initialize the queue

long q_head = 0; // initialize the head
long q_tail = 0; // Initialize the tail

// function to check the queue is empty or not

bool queue_empty(void) {
	bool result;

	if (q_tail == q_head) {
		result = true;
	} else {
		result = false;
	}

	return result;
}

/*
 * enqueue(q) implementation
 */
void enqueue(int x) {
	q[q_tail++] = x;

	return;
}

/*
 * dequeue(q) implementation
 */
int dequeue(void) {
	if (queue_empty()) {
		printf("underflow error\n");
		exit(EXIT_FAILURE);
	} else {
		return q[q_head++];
	}
}


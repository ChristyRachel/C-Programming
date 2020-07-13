/*
 * src.c
 *
 *  Created on: Jul. 10, 2020
 *      Author: christy
 *      Credis: Takis
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "queue.h"

int main() {
	/* declare and initialize variables */
	queue_t queue;
	queue.head = 0;
	queue.tail = 0;

	int loadarr[] = { 52, -29, 36, 1154, 72, 0, 68, 44, 33, 59 };

	// find the length of the array by dividing array size by element size
	size_t L = sizeof(loadarr) / sizeof(int);

	/* load queue by using for loop */
	size_t i;
	for (i = 0; i != L; ++i) {
		printf("Queue.tail = %zu, ", queue.tail);
		enqueue(&queue, loadarr[i]);
		printf("Enqueuing %d\n", loadarr[i]);
	}

	/* dequeue elements until it become empty */
	int x;
	while (queue_empty(&queue) == false) {
		printf("Queue Head = %zu, ", queue.head);
		x = dequeue(&queue);
		printf("Dequeue %d\n", x);
	}

	/* test error function */
	//x = pop(&stack); /* comment this out to avoid error */
	return EXIT_SUCCESS;
}

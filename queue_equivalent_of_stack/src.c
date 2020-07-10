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
#include "queue_function.h"

int main() {

	int q[L];
	// Initialize the queue

	long q_head = 0; // initialize the head
	long q_tail = 0; // Initialize the tail

	// initialize and load the array of numbers
	int loadarr[] = { 52, -29, 36, -821, 790, -650, 1125, 72, 0, 68, 33, 59 };

	// find the size of the array by dividing array size by element size.
	size_t N = sizeof(loadarr) / sizeof(int);

	/* print out contents of array */
	printf("data to be loaded on to the queue:\n");

	// print each element in the array using a for loop
	for (size_t i = 0; i != N; ++i) {
		printf("%d ", loadarr[i]);
	}
	printf("\n");

	/* enqueue queue */
	printf("enqueueing data onto queue...\n");

	// print each element in the array using a for loop by calling enqueue function
	for (size_t i = 0; i != N; ++i) {
		enqueue(loadarr[i]);
	}

	/* dequeue queue */
	printf("dequeueing data off of queue...\n");

	/*
	 * print each element in the array after dequeueing by
	 * calling dequeue function until the queue become
	 * empty using while loop
	 * */

	while (queue_empty() == false) {
		printf("%d ", dequeue());
	}

	// exit normally
	return EXIT_SUCCESS;
}

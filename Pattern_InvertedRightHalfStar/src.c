/*
 * src.c
 *
 *  Created on: Jul. 29, 2023
 *      Author: christy
 */

#include <stdio.h>

int main()
{
    int rows = 5;

    // first loop to print all rows
    for (int i = 0; i < rows; i++) {

        // first inner loop to print the * in each row
        for (int j = 0; j < rows - i; j++) {
            printf("* ");
        }
        printf("\n");
    }
}



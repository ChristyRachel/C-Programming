/*
 * src.c
 *
 *  Created on: Jul. 7, 2023
 *      Author: christy
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int a,b;
    float c,d;

    scanf("%d%d\n%f%f\n",&a,&b,&c,&d);

    printf("%d %d\n",(a+b),(a-b));
    printf("%0.1f %0.1f",(c+d),(c-d));


    return 0;
}





/*
 * src.c
 *
 *  Created on: Jul. 9, 2023
 *      Author: christy
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    char ch;
    char s[100];
    char sen[100];


    scanf("%c",&ch);
    scanf("%s\n",&s);
    scanf("%[^\n]s",&sen);

    printf("%c\n%s\n%s",ch,s,sen);


    return 0;
}



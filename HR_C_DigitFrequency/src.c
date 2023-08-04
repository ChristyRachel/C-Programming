/*
 * src.c
 *
 *  Created on: Aug. 4, 2023
 *      Author: christy
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char s[1000];
    scanf("%s",&s);

    int a[10];
    for(int i=0;i<10;i++){
        a[i]=0;
    }

    for(int i=0;i<strlen(s);i++){
        switch (s[i]){
           case '0':
           a[0]++;
           break;
           case '1':
           a[1]++;
           break;
           case '2':
           a[2]++;
           break;
           case '3':
           a[3]++;
           break;
           case '4':
           a[4]++;
           break;
           case '5':
           a[5]++;
           break;
           case '6':
           a[6]++;
           break;
           case '7':
           a[7]++;
           break;
           case '8':
           a[8]++;
           break;
           case '9':
           a[9]++;
           break;
        }
    }

    for(int i=0;i<10;i++){
        printf("%d ",a[i]);
    }

    return 0;
}




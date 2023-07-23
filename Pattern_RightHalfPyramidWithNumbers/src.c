/*
 * src.c
 *
 *  Created on: Jul. 21, 2023
 *      Author: christy
 */

#include <stdio.h>

int main(){
    int row;
    scanf("%d",&row);

    for(int i=0;i<row;i++){
        for(int j=0;j<=i;j++){
            printf("%d",j+1);
        }
        printf("\n");
    }
    return 0;
}



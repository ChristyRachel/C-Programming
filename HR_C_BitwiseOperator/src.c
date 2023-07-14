/*
 * src.c
 *
 *  Created on: Jul. 14, 2023
 *      Author: christy
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {

  //Write your code here.
  int i=0,j=0,MaxAnd=0,MaxOr=0, MaxXor=0;

  for(i=0;i<=n;i++){

      for(j=i+1;j<=n;j++){

        int And = i & j;
        int Or = i | j;
        int Xor = i ^ j;

       if((And < k) && (MaxAnd <= And)){
           MaxAnd = And;
       }
       if((Or < k) && (MaxOr <= Or)){
           MaxOr = Or;
       }
       if((Xor < k) && (MaxXor <= Xor)){
           MaxXor = Xor;
       }

      }
  }
printf("%d\n",MaxAnd);
printf("%d\n",MaxOr);
printf("%d\n",MaxXor);

}

int main() {
    int n, k;

    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);

    return 0;
}




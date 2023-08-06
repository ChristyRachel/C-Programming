#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    // malloc : memory allocation for the array
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }

    for(int j = num-1; j<(arr + j); j--)
        printf("%d ", *(arr + j));
    return 0;
}

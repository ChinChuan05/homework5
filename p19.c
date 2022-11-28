#include <stdlib.h>
#include <stdio.h>
#define SIZE 4

int main(){
    int b[] = {10, 20, 30, 40};
    int *bPtr = b;
    int i;

    printf("Array subscript notation\n");
    for(i=0; i<SIZE; i++)
        printf("b[%d] = %d\n", i, b[i]);

    printf("\nPointer/offset notation where the pointer is the array name\n");
    for(i=0; i<SIZE; i++)
        printf("*<b = %d> = %d\n", i, *(b+i));

    printf("\nPointer subscript notation\n");
    for(i=0; i<SIZE; i++)
        printf("bPtr[%d] = %d\n", i, b[i]);

    printf("\nPointer/offset notation\n");
    for(i=0;i<SIZE;i++)
        printf("*<bPtr + %d> = %d\n", i, *(bPtr+i));
}

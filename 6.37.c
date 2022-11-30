#include <stdlib.h>
#include <stdio.h>

int findMax(int list[], int size);

int main(){
    int num[10] = {3, 7, 99, 109, 83, 76, 33, 22, 29, 39};

    for(int i; i<10; i++){
        printf("%3d", num[i]);
    }

    printf("The max in array is %d\n", findMax(num, 10));
}

int findMax(int list[], int size){
    int max = 0;
    for(int i; i<size; i++){
        if (max<list[i])
            max = list[i];
    }

    return max;
}

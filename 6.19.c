#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int roll_dice();
int i;
int times[11];

int main(){
    srand(time(0));
    for(i=0; i<36000; i++){
        times[roll_dice()-2] += 1;
    }

    printf("\n\n");
    for(i=0; i<11; i++){
        printf("dice 1 + dice 2 = %d 出現 %d 次\n", i+2, times[i]);
    }
}

int roll_dice(){
    int dice1, dice2;
    dice1 = rand() % 6 + 1;
    dice2 = rand() % 6 + 1;
    printf("Roll dice 1 is %d, dice 2 is %d, d1 + d2 = %d\n", dice1, dice2, dice1+dice2);
    return dice1 + dice2;
}

#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int BinarySearch(int data[], int target, int left, int right);
int roll_dice();
void BubbleSort(int *data);

int main(){
    int times[11] = {0}, i, target, size = 11, result;

    srand(time(0));
    for(i=0; i<100; i++){
        times[roll_dice()-2] += 1;
    }
    
    printf("\n\n");
    for(i=0; i<11; i++){
        printf("dice 1 + dice 2 = %d 出現 %d 次\n", i+2, times[i]);
    }
    printf("\ntimes[]= {");
    BubbleSort(times);
    printf("}\n");

    printf("\n\n請輸入欲尋找數值: ");
    scanf("%d", &target);
    result = BinarySearch(times, target, 0, 10);
   
    result!=-1 ? printf("欲尋找數值%d所在位置為times[%d]\n", target, result) : printf("查無資料!!\n");
}

int BinarySearch(int data[], int target, int left, int right){
    int index = (int)(left + right) / 2;
    //printf("%d\n", index);
    if(data[index] == target){
        return index;
    }
    else if(left > right){
        return -1;
    }
    else if (target > data[index]){
        return BinarySearch(data, target, index+1, right);
    }
    else if (target < data[index]){
        return BinarySearch(data, target, left, index-1);
    }
}

int roll_dice(){
    int dice1, dice2;
    dice1 = rand() % 6 + 1;
    dice2 = rand() % 6 + 1;
    printf("Roll dice 1 is %d, dice 2 is %d, d1 + d2 = %d\n", dice1, dice2, dice1+dice2);
    return dice1 + dice2;
}

void BubbleSort(int *data){
    int i, j, buffer, size = 10;

    for(i=0; i<size; i++){
        for(j=0; j<size; j++){
            if(*(data+j) > *(data+1+j)){
                buffer = *(data+j);
                *(data+j) = *(data+j+1);
                *(data+j+1) = buffer;
            }
        }
    }

    for(i=0; i<size+1; i++){
        printf("%4d", data[i]);
    }
}

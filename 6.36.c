#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void stringReverse(char string[]);

int main(){
    char InSring[50];

    printf("Enter the string: ");
    gets(InSring);
    stringReverse(InSring);

    return 0;
}

void stringReverse(char string[]){
    int i=0, range=0;
    char new[50];

    while(string[range] != '\0'){
        range++;
    }
    printf("The invert string is ");
    for(i=range-1; i>=0; i--){
       printf("%c", string[i]);
    }
    printf("\n");
}

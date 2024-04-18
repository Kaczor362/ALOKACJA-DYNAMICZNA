#include <iostream>
#include "array.h"
#define SIZE 10

void insert(char array[]){
    printf("Enter text:");
    fgets( array,9 ,stdin);

}
void show(char array[]){
    for (int i = 0; i < SIZE; ++i) {
        printf("array[%d]= %c \n",i, array[i]);
    }
}
void small(char *array){
    while (*array)
    {
        if ('A' <= *array && *array <= 'Z')
        {
            *array += ('a'-'A');

        }
    }
}
int lenght(char *array){
    int counter = 0;
    while (*(array + counter)){
        counter++;
    }
    return counter;
}
void clear(void){
    while (getchar() != '\n');
}

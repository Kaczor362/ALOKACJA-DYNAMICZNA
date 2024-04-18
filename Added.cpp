#include <iostream>
#include "array.h"
#define SIZE 10

void insert(char array[]){
    printf("Enter text:");
    fgets( array,100 ,stdin);
}
void show(char array[]){
    for (int i = 0; i < SIZE; ++i) {
        printf("array[%d]= %c \n",i, array[i]);
    }
}
char small(char *array){
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
void clear(void) {
    while (getchar() != '\n');
}
char saveArrayToFile(char array[]) {
        FILE *fptr = NULL;
                fptr = fopen("array.txt", "w");
                if (fptr == NULL){
                    return 1;
                }
        for (int i = 0; i < SIZE  ; ++i) {
            fprintf(fptr,"array[%c] = %c\n", i, array[i]);
        }
        fclose(fptr);
        return 0;
}
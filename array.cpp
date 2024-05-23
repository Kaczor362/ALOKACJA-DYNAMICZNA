#include <iostream>
#include "array.h"

using namespace std;


void insert(char array[]){
    printf("Enter text:");
    fgets( array,100 ,stdin);
}
void show(char array[]){
    for (int i = 0; i < SIZE; ++i) {
        cout<<"array["<<i<<"]="<<array[i]<<endl;
    }
}
int small(char *array){
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
void printDataFromTheFile(char *array) {
    FILE *fptr = fopen("array.txt", "r");
    if (fptr == NULL) {
        cout<<("Error opening file for reading.\n");
        return;
    }

    cout<<("Data from: 'array.txt':\n");

    for (int i = 0; i < SIZE; ++i) {

        fscanf(fptr, "array[%c]", &array[i]);

        cout<<("%c\n", array[i]);
    }

    fclose(fptr);
}
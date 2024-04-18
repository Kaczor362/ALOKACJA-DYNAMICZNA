#include <iostream>
#include "array.h"
#define SIZE 10

void menu(void){
    printf("0.Exit\n");
    printf("1. Enter data: \n");
    printf("2. Show data \n");
    printf("3. Check lenght of: \n");
    printf("Select an option:\n");

}

int main() {

    char array[SIZE] = {""};
    printf("Simple array...\n");

    int option = 0;

    do{
        menu();
        scanf("%d", &option);
        clear();

        switch (option) {
            case  0 :
                break;
            case 1:
                insert(array);
            case 2:
                show(array);
            case 3:
                lenght(array);
            case 4:
                small(array);
            case 5:

            default:
                printf("CHose correct number: \n");
        }
    }while  (option !=0);
    {
        printf("koniec : )");
    }


    return 0;
}

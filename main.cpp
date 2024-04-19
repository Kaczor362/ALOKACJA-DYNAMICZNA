#include <iostream>
#include "array.h"

void menu(void){
    printf("0.Exit\n");
    printf("1. Enter data: \n");
    printf("2. Show data \n");
    printf("3. Check lenght of: \n");
    printf("5. Saving data: \n");
    printf("Select an option:\n");
    printf("Select an option:\n");

}

int main() {

    char array[SIZE] = {1,2,3,4,5,6,7,8,9,10};
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
                break;
            case 2:
                show(array);
                break;
            case 3:
                lenght(array);
                break;
            case 4:
                small(array);
                break;
            case 5:
                printf("Saving data to file:\n");
                if (!saveArrayToFile(array)){
                    printf("Array saved");
                }else{
                    printf("Something ocured...\n");
                }
                break;
            case 6:
                printDataFromTheFile(array);
                printf("Data restored from the file\n");
                break;

            default:
                printf("CHose correct number: \n");
        }
    }while  (option !=0);
    {
        printf("koniec : )");
    }


    return 0;
}
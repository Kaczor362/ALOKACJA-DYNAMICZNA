#include <iostream>
#include "array.h"

using namespace std;

void menu(void){
    printf("0.Exit\n");
    printf("1. Enter data: \n");
    printf("2. Show data \n");
    printf("3. Check lenght of: \n");
    printf("5. Saving data: \n");
    printf("6.Print data: \n");
    printf("Select an option:\n");

}

int main() {

    char array[SIZE] = {1,2,3,4,5,6,7,8,9,10};
    cout<<("Simple array...\n");

    int option = 0;

    do{
        menu();
        printf("Choose option \n");
        cin>>option;
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
            case 5:
                printf("Saving data to file:\n");
                if (!saveArrayToFile(array)){
                    cout<<("Array saved");
                }else{
                    cout<<("Something ocured...\n");
                }
                break;
            case 6:
                printDataFromTheFile(array);
                cout<<("Data restored from the file\n");
                break;

            default:
                cout<<("Chose correct number: \n");
        }
    }while  (option !=0);
    {
        cout<<("END");
    }


    return 0;
}
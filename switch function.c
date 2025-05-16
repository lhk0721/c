#include<stdio.h>
#include<stdlib.h>

int main(void){

    int cmd = 0;
    
    while(1){
        printf(
            "\n-------------------------\n"
            "1. \n"
            "2. \n"
            "3. \n"
            "4. \n"
            "-------------------------\n"
            "Select an input option :\n");
        scanf(" %d", &cmd);
        switch(cmd){
        case 1:
            // code
            break;
        case 2:
            // code
            break;
        case 3:
            // code
            break;
        case 4:
            printf("exit program...\n");
            return 0;
        
        default:
        printf("Invalid input. Please try again\n");
            break;
        }
    }
}
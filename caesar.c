#include<stdio.h>
#include"caesar.h"



int main(){
    printf("----------------------------\n");
    printf("Ave Caesar, morituri te salutant!\n");
    printf("Caesar cipher\n");


    char input[255];
    int shiftvalue;
    
    while(1){
        printf("----------------------------\n");   
        printf("Choose an option\n");
        printf("1. Encrypt\n");
        printf("2. Decrypt\n");
        printf("q. Quit\n");
        printf("----------------------------\n");
        char choice = get_choice();

        switch (choice)
        {
        case 'q':
            return 0;
            break;
        case '1':
            getchar(); // Remove newline from buffer
            printf("----------------------------\n");
            printf("Enter a string to encrypt\n");
            printf("----------------------------\n");
            fgets(input, 255, stdin); // Read input from user. Basically better gets.
            printf("Enter a shift value: ");
            scanf("%d", &shiftvalue);
            caesar_encrypt(input, shiftvalue);
            printf("Encrypted string: \033[4m%s\033[0m\n", input);
            getchar();
            break;
        case '2':
            getchar();
            printf("----------------------------\n");
            printf("Enter a string to decrypt\n");
            printf("----------------------------\n");
            fgets(input, 255, stdin);
            printf("Enter a shift value: ");
            scanf("%d", &shiftvalue);
            caesar_decrypt(input, shiftvalue);
            printf("Decrypted string: \033[4m%s\033[0m\n", input);
            getchar();
            break;
        default:
            break;
        }
           
    }

}


char get_choice()
{
    char choice = 0;
    scanf(" %c", &choice);
    return choice;
}

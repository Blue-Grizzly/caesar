#include<stdio.h>
#include"caesar.h"



int main(){

    while(1){
        char choice = get_choice();
        char input[255];
        int shiftvalue;
        switch (choice)
        {
        case 'q':
            return 0;
            break;
        case '1':
            printf("----------------------------\n");
            printf("Enter a string to encrypt\n");
            printf("----------------------------\n");
            fgets(input, 255, stdin);
            printf("Enter a shift value: ");
            scanf("%d", &shiftvalue);
            caesar_encrypt(input, shiftvalue);
            printf("Encrypted string: %s\n", input);
            break;
        case '2':
             printf("----------------------------\n");
            printf("Enter a string to decrypt\n");
            printf("----------------------------\n");
            fgets(input, 255, stdin);
            printf("Enter a shift value: ");
            scanf("%d", &shiftvalue);
            caesar_decrypt(input, shiftvalue);
            printf("Decrypted string: %s\n", input);
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

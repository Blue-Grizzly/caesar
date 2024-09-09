#include<stdio.h>
#include"caesar.h"



int main(){

    while(1){
        char input[255];
        int shiftvalue;
        printf("Enter a string to encrypt: ");
        fgets(input, 255, stdin);
        printf("Enter a shift value: ");
        scanf("%d", &shiftvalue);
        caesar_encrypt(input, shiftvalue);
        printf("Encrypted string: %s\n", input);
        caesar_decrypt(input, shiftvalue);
        printf("Decrypted string: %s\n", input);
        getchar();
    }


}
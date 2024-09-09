#include<string.h>
#include<ctype.h>

char * lower_case = "abcdefghijklmnopqrstuvwxyzæøå";
char * upper_case = "ABCDEFGHIJKLMNOPQRSTUVWXYZÆØÅ";


int letter_to_number(char c){
    for(int i = 0; i < 29; i++){
        if(c == lower_case[i] || c == upper_case[i]){
            return i;
        }
    }
    return -1;
}

char number_to_letter(int n, int upper){
    if(n < 0 || n > 28){
        return ' ';
    }
    if(upper){
        return upper_case[n];
    }
    return lower_case[n];
}

int shift(int number, int shiftvalue){
    return (number + shiftvalue) % 29;
}

void caesar_encrypt(char * input, int shiftvalue){
    for(int i = 0; i < strlen(input); i++){
        int n = letter_to_number(input[i]);
        if(n != -1){
            input[i] = number_to_letter(shift(n, shiftvalue), isupper(input[i]));
        }
    }
}

void caesar_decrypt(char * input, int shiftvalue){
    for(int i = 0; i < strlen(input); i++){
        int n = letter_to_number(input[i]);
        if(n != -1){
            input[i] = number_to_letter(shift(n, -shiftvalue), isupper(input[i]));
        }
    }
}
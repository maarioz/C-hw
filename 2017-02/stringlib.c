#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include "stringlib.h"

unsigned int stringLength(const char source[]) {
    int i = 0;
    for (; source[i] != '\0'; i++);
    return i;
}

void stringCopy(char destination[], const char source[]) {
    int i;
    for (i = 0; source[i] != '\0'; i++) {
        destination[i] = source[i];
    }
    destination[i] = '\0';
}

int isPalindrome(const char input[]) {
    int length = stringLength(input);
    int success = 1;
    int j = 0;
    
    for (int i = 0; i < (int) ceil(length / 2.0); i++) {
        int end = length - j - 1;
        while (isspace(input[i])) {
            i++;
        }
        while (isspace(input[end])) {
            end = length - ++j - 1;
        }
        if (toupper(input[i]) != toupper(input[end])) {
            success = 0;
        }
        ++j;
    }
    return success;
}

int rotateString(const char source[], char destination[], int number) {
    int length = stringLength(source);
    if (length == 0) {
        return -1;
    }
    stringCopy(destination, source);
    int finalIndex;
    
    for (int i = 0; i < length; i++) {
        finalIndex = (i + number) % length;
        destination[finalIndex] = source[i];
    }
    return 0 + number % length;
}

int printEnv(const char *env[], char separator[]) {
    int count = 0;
    
    for (int i = 0; env[i] != NULL; i++) {
        printf("%s%c", env[i], separator[0]);
        count++;
    }
    return count;
}

int gcd(int a, int b) {
    if (a == 0) {
        return b;
    }
    return gcd(b % a, a);
}

int encryptString(const char source[], char destination[], int cipher) {
    int k = stringLength(source);
    
    if (gcd(k + 1, cipher) != 1) {
        return -1;
    }
    for (int i = 0; source[i] != 0; i++) {
        int j = (cipher * (i + 1) - 1) % (k + 1);
        destination[j] = source[i];
    }
    return 0;
}

int decryptString(const char source[], char destination[], int cipher) {
    int k = stringLength(source);
    int dec = 1;
    
    if (gcd(k + 1, cipher) != 1) {
        return -1;
    }
    while ((dec * cipher) % (k + 1) != 1) {
        dec++;
    }
    for (int i = 0; source[i] != 0; i++) {
        int j = (dec * (i + 1) - 1) % (k + 1);
        destination[j] = source[i];
    }
    return 0;
}

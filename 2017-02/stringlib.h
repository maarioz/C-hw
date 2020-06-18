#ifndef stringlib_h
#define stringlib_h

/**
 *  Copies the source string into destination
 *
 *  @param destination place where string will be copied
 *  @param source place from which string is copied
 */
void stringCopy(char destination[], const char source[]);

/**
 * Calculates length of string
 *
 * @param source String
 *
 * @return length of source string
 */
unsigned int stringLength(const char source[]);

/**
 * Verifies that source string is palindrome
 *
 * @param source the string to be verified
 *
 * @return 0 if source is palindrome -1 otherwise
 */
int isPalindrome(const char source[]);

/**
 * Rotates characters in string
 *
 * @param source string to be rotated
 * @param destination place where rotated string will be stored
 * @param number offset in rotation
 *
 * @return 0 if operation suceeded -1 otherwise
 */
int rotateString(const char source[], char destination[], int number);

/**
 * Prints array of strings to stdout
 *
 * @param env array of strings to be printed
 * @param separator string which will separate strings in stdout
 *
 * @return number of printed environment variables
 */
int printEnv(const char *env[], char separator[]);

/**
 * Finds the greatest common divisor of two numbers
 *
 * @param a first number
 * @param b second number
 *
 * @return the greatest common divisor
 */
int gcd(int a, int b);

/**
 * Encrypts string by rewriting index in source array
 *
 * @param source string to be encrypted
 * @param destination place where encrypted string will be stored
 * @param cipher number which will be used to calculate new index
 *
 * @return 0 if operation succeeds -1 otherwise
 */
int encryptString(const char source[], char destination[], int cipher);

/**
 * Decrypts string previously encrypted by encryptString
 *
 * @param source string to be decrypted
 * @param destination place where decrypted string will be stored
 * @param cipher number which will be used to calculate new index
 *
 * @return 0 if operation succeeds -1 otherwise
 */
int decryptString(const char source[], char destination[], int cipher);

#endif /* stringlib_h */

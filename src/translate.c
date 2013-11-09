/*
 ============================================================================
 Name        : translate.c
 Author      : Avi Levy
 Version     :
 Copyright   : AdminTheWeb
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include "mamn11-2.h"
/*
 * This main function is to get interactive input from user
 * the program ask for number between 0-4294967295 and call to translate_dec_hex() function
 * to convert it to binary and print the result
 *
 * According to the instruction I assume that the input is number and in the range of unsigned int
 */
int main(void){
	char inputChar[NUMBER_OF_DIGIT_IN_DEC_UINT];

	printf("Please enter positive integer between 0 - 4294967295:");
	scanf("%s", inputChar);
	translate_dec_hex(inputChar);
	return EXIT_SUCCESS;
}

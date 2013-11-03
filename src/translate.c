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
 */
int main(void){
	char inputChar[NUMBER_OF_DIGIT_IN_DEC_UINT];

	printf("Please enter positive integer between 0 - 4294967295:");
	scanf("%s", inputChar);
	translate_dec_hex(inputChar);
	return EXIT_SUCCESS;
}

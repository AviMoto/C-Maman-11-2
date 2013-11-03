/*
 * translate_dec_hex.c
 *
 *  Created on: 30 בספט 2013
 *      Author: Avi
 */

#include "mamn11-2.h"

void translate_dec_hex(char x[]){
	char binary[NUMBER_OF_DIGIT_IN_BINARY_UINT];
	unsigned int number, charIndex, binaryLength;

	sscanf(x, "%u", &number);
	for(charIndex = 0; number > 0; charIndex++){
		binary[charIndex] = (number % 2) + '0';
		number /= 2;
	}
	binary[charIndex] ='\0';
	binaryLength = strlen(binary);
	for(charIndex = 0 ; charIndex < binaryLength/2 ; ++charIndex){
		binary[charIndex] += binary[binaryLength-1-charIndex];
		binary[binaryLength-1-charIndex] = binary[charIndex] - binary[binaryLength-1-charIndex];
		binary[charIndex] -= binary[binaryLength-1-charIndex];
	}
	printf("%s", binary);
}

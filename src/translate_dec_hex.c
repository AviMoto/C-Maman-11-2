/*
 * translate_dec_hex.c
 *
 *  Created on: 30 בספט 2013
 *      Author: Avi
 */

#include "mamn11-2.h"

/*
 * This function translate number in 10 base to binary and print the result
 *
 * @parameters
 *
 * 	x - is char array, assume that it represante number between 0-4294967295 (range of unsignd int)
 *
 * @return
 *
 * 	The function didn't return any value
 *
 *
 */

void translate_dec_hex(char x[]) {
	char binary[NUMBER_OF_DIGIT_IN_BINARY_UINT];
	unsigned int number, charIndex, binaryLength;

	sscanf(x, "%u", &number);	/* convert the char into unsignd int) */

	/* check if the number is 0 if so binary = 0 else need to convert */
	if (number != 0) {
		/* convert the 10 base number into binary number by % 2 */
		for (charIndex = 0; number > 0; charIndex++) {
			binary[charIndex] = (number % 2) + '0';
			number /= 2;
		}

		/* need to reverse the output string */
		binary[charIndex] = '\0';
		binaryLength = strlen(binary);
		for (charIndex = 0; charIndex < binaryLength / 2; ++charIndex) {
			binary[charIndex] += binary[binaryLength - 1 - charIndex];
			binary[binaryLength - 1 - charIndex] = binary[charIndex]
					- binary[binaryLength - 1 - charIndex];
			binary[charIndex] -= binary[binaryLength - 1 - charIndex];
		}
	} else {
		strcpy(binary, "0");
	}
	printf("%s\n", binary); /* print the result */
}

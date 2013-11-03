translate : translate.o translate_dec_hex.o
	gcc -g -Wall -ansi -pedantic translate.o translate_dec_hex.o -o translate

translate.o : translate.c mamn11-2.h
	gcc -c -Wall -ansi -pedantic translate.c -o translate.o

translate_dec_hex.o : translate_dec_hex.c mamn11-2.h
	gcc -c -Wall -ansi -pedantic translate_dec_hex.c -o translate_dec_hex.o
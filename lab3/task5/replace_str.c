/* Overwrites an inputted string with 232 is awesome! if there is room.
 * * Does nothing if there is not. */
// Does this work
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void CS232(char* src) {
     char *srcptr, *replaceptr; 
     // char *srcptr, *replaceptr;
     int srcLength = strlen(src);
     printf("%s",src);
     printf("%d",srcLength);
     char replacement[15] = {"232 is awesome!"};
     srcptr = src;
     replaceptr = replacement;
     if (srcLength <= 16) {
         for (int i = 0; i < 16; i++)
	      *srcptr++ = *replaceptr++;
     }
}   

char * replace_string(char inLength) {
    char* str = malloc(sizeof(inLength));
    *str = inLength;
    CS232(str);
    return str;

} //ALL YOU HAVE TO DO IS PASS THE # INTO CS232, IT WORKS, JUST ADJUST ARGV COMMENT IN REPLACE STR!!!

int main(int argc, char ** argv) {
    char * ret = replace_string(argv);
    printf("replaced string = %s\n", ret);
    return 0;
}
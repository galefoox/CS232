/* Overwrites an inputted string with 232 is awesome! if there is room.
 * * Does nothing if there is not. */
// Does this work
#include <stdio.h>
#include <stdlib.h>

void CS232(char* src) {
     char *srcptr, *replaceptr; 
     // char *srcptr, *replaceptr;
     int* srcLength =(int*) malloc (sizeof(src));
     char* replacement[15] = {"232 is awesome!"};
     srcptr = src;
     replaceptr = *replacement;
     if (*srcLength <= 16) {
         for (int i = 0; i < 16; i++)
	      *srcptr++ = *replaceptr++;
     }
}   

char * replace_string() {
    char* str = malloc(16);
    CS232(str);
    return str;

}

int main(int argc, char ** argv) {
    char * ret = replace_string();
    printf("replaced string = %s\n", ret);
    return 0;
}
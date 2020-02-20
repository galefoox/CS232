/* Overwrites an inputted string with 232 is awesome! if there is room.
 * * Does nothing if there is not. */
#include <stdio.h>

void CS232(char* src) {
     char *srcptr, *replaceptr;
     // char *srcptr, *replaceptr;
     int srcLength = sizeof(src) / sizeof(src[0]);
     char *replacement[15] = {"232 is awesome!"};
     srcptr = src;
     replaceptr = *replacement;
     if (srcLength >= 15) {
         for (int i = 0; i < 15; i++)
	      *srcptr++ = *replaceptr++;
     }
}

char * replace_string() {
    char *str[15];
    CS232(str[15]);
    return *str;

}

int main(int argc, char ** argv) {
    char ret = *replace_string();
    printf("replaced string = %p\n", &ret);
    return 0;
}

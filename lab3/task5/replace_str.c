/* Overwrites an inputted string with 232 is awesome! if there is room.
 * * Does nothing if there is not. */
#include <stdio.h>
#include<stdlib.h>
#include<string.h>


void CS232(char* src , int srcLength) {
     //char *srcptr, *replaceptr;
      char *srcptr, *replaceptr;
	 int srcLength = strlen(src);
     char replacement[15] = {"232 is awesome!"};
     srcptr = src;
     replaceptr = replacement;
	 if (srcLength >= 16)
	 {
	 
		for (int i = 0; i < srcLength; i++)
		{
			*srcptr++ = *replaceptr++;
		}

	}

}

char * replace_string() {
    char* str = (char*) malloc (16);
    CS232(str , 16);
    return str;

	

}

int main(int argc, char ** argv) {
    char *ret = replace_string();
    printf("replaced string = %p\n", ret);
    return 0;

}
